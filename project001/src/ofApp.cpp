#include "ofApp.h"


int held_plus_count = 0;
int short_plus_count = 0;
int held_soundscape = 0;
int short_soundscape = 0;
ofSoundPlayer current_sound;
int last_pressed;

//--------------------------------------------------------------
void ofApp::setup(){
	/*load all the sound files*/
	/***********************************************piano******************************************************/
	held0_1.load("piano_sounds/held_C.wav");
	held0_1.setMultiPlay(true);
	held0_1.setLoop(true);
	held0_q.load("piano_sounds/held_C#.wav");
	held0_q.setMultiPlay(true);
	held0_q.setLoop(true);
	held0_2.load("piano_sounds/held_D.wav");
	held0_2.setMultiPlay(true);
	held0_2.setLoop(true);
	held0_w.load("piano_sounds/held_D#.wav");
	held0_w.setMultiPlay(true);
	held0_w.setLoop(true);
	held0_3.load("piano_sounds/held_E.wav");
	held0_3.setMultiPlay(true);
	held0_3.setLoop(true);
	held0_4.load("piano_sounds/held_F.wav");
	held0_4.setMultiPlay(true);
	held0_4.setLoop(true);
	held0_r.load("piano_sounds/held_F#.wav");
	held0_r.setMultiPlay(true);
	held0_r.setLoop(true);
	held0_5.load("piano_sounds/held_G.wav");
	held0_5.setMultiPlay(true);
	held0_5.setLoop(true);
	held0_t.load("piano_sounds/held_G#.wav");
	held0_t.setMultiPlay(true);
	held0_t.setLoop(true);
	held0_6.load("piano_sounds/held_A.wav");
	held0_6.setMultiPlay(true);
	held0_6.setLoop(true);
	held0_y.load("piano_sounds/held_A#.wav");
	held0_y.setMultiPlay(true);
	held0_y.setLoop(true);
	held0_7.load("piano_sounds/held_B.wav");
	held0_7.setMultiPlay(true);
	held0_7.setLoop(true);
	held0_8.load("piano_sounds/held_C_HIGH.wav");
	held0_8.setMultiPlay(true);
	held0_8.setLoop(true);

	short0_a.load("piano_sounds/held_C.wav");
	short0_a.setMultiPlay(true);
	short0_z.load("piano_sounds/held_C#.wav");
	short0_z.setMultiPlay(true);
	short0_s.load("piano_sounds/held_D.wav");
	short0_s.setMultiPlay(true);
	short0_x.load("piano_sounds/held_D#.wav");
	short0_x.setMultiPlay(true);
	short0_d.load("piano_sounds/held_E.wav");
	short0_d.setMultiPlay(true);
	short0_f.load("piano_sounds/held_F.wav");
	short0_f.setMultiPlay(true);
	short0_v.load("piano_sounds/held_F#.wav");
	short0_v.setMultiPlay(true);
	short0_g.load("piano_sounds/held_G.wav");
	short0_g.setMultiPlay(true);
	short0_b.load("piano_sounds/held_G#.wav");
	short0_b.setMultiPlay(true);
	short0_h.load("piano_sounds/held_A.wav");
	short0_h.setMultiPlay(true);
	short0_n.load("piano_sounds/held_A#.wav");
	short0_n.setMultiPlay(true);
	short0_j.load("piano_sounds/held_B.wav");
	short0_j.setMultiPlay(true);
	short0_k.load("piano_sounds/held_C_HIGH.wav");
	short0_k.setMultiPlay(true);


	/************************************************ sawtooth ***************************************************/
	held1_1.load("sawtooth/low_c.wav");
	held1_1.setMultiPlay(true);
	held1_1.setLoop(true);
	held1_q.load("sawtooth/c#.wav");
	held1_q.setMultiPlay(true);
	held1_q.setLoop(true);
	held1_2.load("sawtooth/d.wav");
	held1_2.setMultiPlay(true);
	held1_2.setLoop(true);
	held1_w.load("sawtooth/d#.wav");
	held1_w.setMultiPlay(true);
	held1_w.setLoop(true);
	held1_3.load("sawtooth/e.wav");
	held1_3.setMultiPlay(true);
	held1_3.setLoop(true);
	held1_4.load("sawtooth/f.wav");
	held1_4.setMultiPlay(true);
	held1_4.setLoop(true);
	held1_r.load("sawtooth/f#.wav");
	held1_r.setMultiPlay(true);
	held1_r.setLoop(true);
	held1_5.load("sawtooth/g.wav");
	held1_5.setMultiPlay(true);
	held1_5.setLoop(true);
	held1_t.load("sawtooth/g#.wav");
	held1_t.setMultiPlay(true);
	held1_t.setLoop(true);
	held1_6.load("sawtooth/a.wav");
	held1_6.setMultiPlay(true);
	held1_6.setLoop(true);
	held1_y.load("sawtooth/a#.wav");
	held1_y.setMultiPlay(true);
	held1_y.setLoop(true);
	held1_7.load("sawtooth/b.wav");
	held1_7.setMultiPlay(true);
	held1_7.setLoop(true);
	held1_8.load("sawtooth/high_c.wav");
	held1_8.setMultiPlay(true);
	held1_8.setLoop(true);

	short1_a.load("sawtooth/low_c.wav");
	short1_a.setMultiPlay(true);
	short1_z.load("sawtooth/c#.wav");
	short1_z.setMultiPlay(true);
	short1_s.load("sawtooth/d.wav");
	short1_s.setMultiPlay(true);
	short1_x.load("sawtooth/d#.wav");
	short1_x.setMultiPlay(true);
	short1_d.load("sawtooth/e.wav");
	short1_d.setMultiPlay(true);
	short1_f.load("sawtooth/f.wav");
	short1_f.setMultiPlay(true);
	short1_v.load("sawtooth/f#.wav");
	short1_v.setMultiPlay(true);
	short1_g.load("sawtooth/g.wav");
	short1_g.setMultiPlay(true);
	short1_b.load("sawtooth/g#.wav");
	short1_b.setMultiPlay(true);
	short1_h.load("sawtooth/a.wav");
	short1_h.setMultiPlay(true);
	short1_n.load("sawtooth/a#.wav");
	short1_n.setMultiPlay(true);
	short1_j.load("sawtooth/b.wav");
	short1_j.setMultiPlay(true);
	short1_k.load("sawtooth/high_c.wav");
	short1_k.setMultiPlay(true);


	/************************************************* bircalls *********************************************************/
	held2_1.load("birds/1.wav");
	held2_1.setMultiPlay(true);
	held2_1.setLoop(true);
	held2_q.load("birds/2.wav");
	held2_q.setMultiPlay(true);
	held2_q.setLoop(true);
	held2_2.load("birds/3.wav");
	held2_2.setMultiPlay(true);
	held2_2.setLoop(true);
	held2_w.load("birds/4.wav");
	held2_w.setMultiPlay(true);
	held2_w.setLoop(true);
	held2_3.load("birds/5.wav");
	held2_3.setMultiPlay(true);
	held2_3.setLoop(true);
	held2_4.load("birds/6.wav");
	held2_4.setMultiPlay(true);
	held2_4.setLoop(true);
	held2_r.load("birds/7.wav");
	held2_r.setMultiPlay(true);
	held2_r.setLoop(true);
	held2_5.load("birds/8.wav");
	held2_5.setMultiPlay(true);
	held2_5.setLoop(true);
	held2_t.load("birds/9.wav");
	held2_t.setMultiPlay(true);
	held2_t.setLoop(true);
	held2_6.load("birds/10.wav");
	held2_6.setMultiPlay(true);
	held2_6.setLoop(true);
	held2_y.load("birds/11.wav");
	held2_y.setMultiPlay(true);
	held2_y.setLoop(true);
	held2_7.load("birds/12.wav");
	held2_7.setMultiPlay(true);
	held2_7.setLoop(true);
	held2_8.load("birds/13.wav");
	held2_8.setMultiPlay(true);
	held2_8.setLoop(true);

	short2_a.load("birds/1.wav");
	short2_a.setMultiPlay(true);
	short2_z.load("birds/2.wav");
	short2_z.setMultiPlay(true);
	short2_s.load("birds/3.wav");
	short2_s.setMultiPlay(true);
	short2_x.load("birds/4.wav");
	short2_x.setMultiPlay(true);
	short2_d.load("birds/5.wav");
	short2_d.setMultiPlay(true);
	short2_f.load("birds/6.wav");
	short2_f.setMultiPlay(true);
	short2_v.load("birds/7.wav");
	short2_v.setMultiPlay(true);
	short2_g.load("birds/8.wav");
	short2_g.setMultiPlay(true);
	short2_b.load("birds/9.wav");
	short2_b.setMultiPlay(true);
	short2_h.load("birds/10.wav");
	short2_h.setMultiPlay(true);
	short2_n.load("birds/11.wav");
	short2_n.setMultiPlay(true);
	short2_j.load("birds/12.wav");
	short2_j.setMultiPlay(true);
	short2_k.load("birds/13.wav");
	short2_k.setMultiPlay(true);


	/************************************************** voiceovers *****************************************************/
	held3_1.load("voice_overs/john_redcorn.wav");
	held3_1.setMultiPlay(true);
	held3_1.setLoop(true);
	held3_q.load("voice_overs/tina.wav");
	held3_q.setMultiPlay(true);
	held3_q.setLoop(true);
	held3_2.load("voice_overs/bob.wav");
	held3_2.setMultiPlay(true);
	held3_2.setLoop(true);
	held3_w.load("voice_overs/dale.wav");
	held3_w.setMultiPlay(true);
	held3_w.setLoop(true);
	held3_3.load("voice_overs/bill.wav");
	held3_3.setMultiPlay(true);
	held3_3.setLoop(true);
	held3_4.load("voice_overs/craig.wav");
	held3_4.setMultiPlay(true);
	held3_4.setLoop(true);
	held3_r.load("voice_overs/hal.wav");
	held3_r.setMultiPlay(true);
	held3_r.setLoop(true);
	held3_5.load("voice_overs/linda.wav");
	held3_5.setMultiPlay(true);
	held3_5.setLoop(true);
	held3_t.load("voice_overs/lois.wav");
	held3_t.setMultiPlay(true);
	held3_t.setLoop(true);
	held3_6.load("voice_overs/hank.wav");
	held3_6.setMultiPlay(true);
	held3_6.setLoop(true);
	held3_y.load("voice_overs/bobby.wav");
	held3_y.setMultiPlay(true);
	held3_y.setLoop(true);
	held3_7.load("voice_overs/luanne.wav");
	held3_7.setMultiPlay(true);
	held3_7.setLoop(true);
	held3_8.load("voice_overs/dewey.wav");
	held3_8.setMultiPlay(true);
	held3_8.setLoop(true);

	short3_a.load("voice_overs/john_redcorn.wav");
	short3_a.setMultiPlay(true);
	short3_z.load("voice_overs/tina.wav");
	short3_z.setMultiPlay(true);
	short3_s.load("voice_overs/bob.wav");
	short3_s.setMultiPlay(true);
	short3_x.load("voice_overs/dale.wav");
	short3_x.setMultiPlay(true);
	short3_d.load("voice_overs/bill.wav");
	short3_d.setMultiPlay(true);
	short3_f.load("voice_overs/craig.wav");
	short3_f.setMultiPlay(true);
	short3_v.load("voice_overs/hal.wav");
	short3_v.setMultiPlay(true);
	short3_g.load("voice_overs/linda.wav");
	short3_g.setMultiPlay(true);
	short3_b.load("voice_overs/lois.wav");
	short3_b.setMultiPlay(true);
	short3_h.load("voice_overs/hank.wav");
	short3_h.setMultiPlay(true);
	short3_n.load("voice_overs/bobby.wav");
	short3_n.setMultiPlay(true);
	short3_j.load("voice_overs/luanne.wav");
	short3_j.setMultiPlay(true);
	short3_k.load("voice_overs/dewey.wav");
	short3_k.setMultiPlay(true);
}

//--------------------------------------------------------------------------------------------------------------------
void ofApp::update(){
	ofSoundUpdate();
}

//--------------------------------------------------------------------------------------------------------------------
void ofApp::draw(){
	/*draw a different background explaining what to do for different 
		values of held_press_count, short_press_count, held_soundscape 
			and short_soundscape*/

	if (held_plus_count == 0) {
		/*set the background color*/
		if (short_plus_count == 1) { ofBackground(255, 100, 0); ofDrawBitmapString("short notes: 1x speed", 2, 30); }
		else if (short_plus_count == 2) { ofBackground(255, 0, 100); ofDrawBitmapString("short notes: 1.5x speed", 2, 30); }
		else if (short_plus_count == 3) { ofBackground(255, 100, 100); ofDrawBitmapString("short notes: 2x speed", 2, 30); }
		else { ofBackground(255, 0, 0); ofDrawBitmapString("short notes: .5x speed", 2, 30); }
		ofDrawBitmapString("held notes: .5x speed", 2, 15);
	}
	else if (held_plus_count == 1) { 
		ofDrawBitmapString("held notes: 1x speed", 2, 2);
		if (short_plus_count == 1) { ofBackground(0, 255, 200); ofDrawBitmapString("short notes: 1x speed", 2, 30); }
		else if (short_plus_count == 2) { ofBackground(200, 255, 0); ofDrawBitmapString("short notes: 1.5x speed", 2, 30); }
		else if (short_plus_count == 3) { ofBackground(100, 255, 100); ofDrawBitmapString("short notes: 2x speed", 2, 30); }
		else { ofBackground(0, 255, 0); ofDrawBitmapString("short notes: .5x speed", 2, 30); }
		ofDrawBitmapString("held notes: 1x speed", 2, 15);
	}
	else if (held_plus_count == 2) {
		ofDrawBitmapString("held notes: 1.5x speed", 2, 2);
		if (short_plus_count == 1) { ofBackground(200, 0, 255); ofDrawBitmapString("short notes: 1x speed", 2, 30); }
		else if (short_plus_count == 2) { ofBackground(0, 200, 255); ofDrawBitmapString("short notes: 1.5x speed", 2, 30); }
		else if (short_plus_count == 3) { ofBackground(100, 100, 255); ofDrawBitmapString("short notes: 2x speed", 2, 30); }
		else { ofBackground(0, 0, 255); ofDrawBitmapString("short notes: .5x speed", 2, 30); }
		ofDrawBitmapString("held notes: 1.5x speed", 2, 15);
	}
	else if (held_plus_count == 3) {
		ofDrawBitmapString("held notes: 2x speed", 2, 2);
		if (short_plus_count == 1) { ofBackground(100, 0, 100); ofDrawBitmapString("short notes: 1x speed", 2, 30); }
		else if (short_plus_count == 2) { ofBackground(0, 100, 100); ofDrawBitmapString("short notes: 1.5x speed", 2, 30); }
		else if (short_plus_count == 3) { ofBackground(100, 100, 0); ofDrawBitmapString("short notes: 2x speed", 2, 30); }
		else { ofBackground(0, 0, 0); ofDrawBitmapString("short notes: .5x speed", 2, 30); }
		ofDrawBitmapString("held notes: 2x speed", 2, 15);
	}

	if (held_soundscape == 0) {
		int posx = 50;
		int posy = 100;
		if (short_soundscape == 1) { posx = 36; ofDrawBitmapString("short notes: sawtooth waves", 250, 30); }
		else if (short_soundscape == 2) { posx = 20; ofDrawBitmapString("short notes: bird sounds", 250, 30); }
		else if (short_soundscape == 3) { posx = 4; ofDrawBitmapString("short notes: voice overs", 250, 30); }
		else { ofDrawBitmapString("short notes: sin waves", 250, 30); }
		ofDrawBitmapString("Use the - and = keys to change the speed of the held notes (1-9, Q-U) and [ and ] to change the actual sounds.", posx, posy);
		ofDrawBitmapString("Use the , and . keys to change the speed of the short notes (A-K, Z-M) and ; and ' to change the actual sounds.", posx, posy+100);
		ofDrawBitmapString("Backspace will stop the earliest pressed held note.", posx, posy + 200);
		ofDrawBitmapString("held notes: sin waves", 250, 15);
	}
	else if (held_soundscape == 1) {
		int posx = 100;
		int posy = 200;
		if (short_soundscape == 1) { posx = 75; ofDrawBitmapString("short notes: sawtooth waves", 250, 30); }
		else if (short_soundscape == 2) { posx = 50; ofDrawBitmapString("short notes: bird sounds", 250, 30); }
		else if (short_soundscape == 3) { posx = 25; ofDrawBitmapString("short notes: voice overs", 250, 30); }
		else { ofDrawBitmapString("short notes: sin waves", 250, 30); }
		ofDrawBitmapString("Use the - and = keys to change the speed of the held notes (1-9, Q-U) and [ and ] to change the actual sounds.", posx, posy);
		ofDrawBitmapString("Use the , and . keys to change the speed of the short notes (A-K, Z-M) and ; and ' to change the actual sounds.", posx, posy+100);
		ofDrawBitmapString("Backspace will stop the earliest pressed held note.", posx, posy + 200);
		ofDrawBitmapString("held notes: sawtooth waves", 250, 15);
	}
	else if (held_soundscape == 2) {
		int posx = 150;
		int posy = 300;
		if (short_soundscape == 1) { posx = 100; ofDrawBitmapString("short notes: sawtooth waves", 250, 30); }
		else if (short_soundscape == 2) { posx = 50; ofDrawBitmapString("short notes: bird sounds", 250, 30); }
		else if (short_soundscape == 3) { posx = 2; ofDrawBitmapString("short notes: voice overs", 250, 30); }
		else { ofDrawBitmapString("short notes: sin waves", 250, 30); }
		ofDrawBitmapString("Use the - and = keys to change the speed of the held notes (1-9, Q-U) and [ and ] to change the actual sounds.", posx, posy);
		ofDrawBitmapString("Use the , and . keys to change the speed of the short notes (A-K, Z-M) and ; and ' to change the actual sounds.", posx, posy+100);
		ofDrawBitmapString("Backspace will stop the earliest pressed held note.", posx, posy + 200);
		ofDrawBitmapString("held notes: bird sounds", 250, 15);
	}
	else if (held_soundscape == 3) {
		int posx = 200;
		int posy = 400;
		if (short_soundscape == 1) { posx = 120; ofDrawBitmapString("short notes: sawtooth waves", 250, 30); }
		else if (short_soundscape == 2) { posx = 80; ofDrawBitmapString("short notes: bird sounds", 250, 30); }
		else if (short_soundscape == 3) { posx = 2; ofDrawBitmapString("short notes: voice overs", 250, 30); }
		else { ofDrawBitmapString("short notes: sin waves", 250, 30); }
		ofDrawBitmapString("Use the - and = keys to change the speed of the held notes (1-9, Q-U) and [ and ] to change the actual sounds.", posx, posy);
		ofDrawBitmapString("Use the , and . keys to change the speed of the short notes (A-K, Z-M) and ; and ' to change the actual sounds.", posx, posy+100);
		ofDrawBitmapString("Backspace will stop the earliest pressed held note.", posx, posy + 200);
		ofDrawBitmapString("held notes: voice overs", 250, 15);
	}
}


//------------------------------------------------------------------------------------------------------------------------------
void ofApp::keyPressed(int key){
	/***************************************** HELD NOTES *******************************************************/
	if (key == '1' || key == 'q' || key == '2' || key == 'w' || key == '3' || key == '4' || key == 'r' ||
		key == '5' || key == 't' || key == '6' || key == 'y' || key == '7' || key == '8') {
		if (key == '1') {	/* hold the 1 */
			if (held_soundscape == 0) { current_sound = held0_1; }
			else if (held_soundscape == 1) { current_sound = held1_1; }
			else if (held_soundscape == 2) { current_sound = held2_1; }
			else { current_sound = held3_1; }
		}
		if (key == 'q') {	/* hold the 1# */
			if (held_soundscape == 0) { current_sound = held0_q; }
			else if (held_soundscape == 1) { current_sound = held1_q; }
			else if (held_soundscape == 2) { current_sound = held2_q; }
			else { current_sound = held3_q; }
		}
		if (key == '2') {	/* hold the 2 */
			if (held_soundscape == 0) { current_sound = held0_2; }
			else if (held_soundscape == 1) { current_sound = held1_2; }
			else if (held_soundscape == 2) { current_sound = held2_2; }
			else { current_sound = held3_2; }
		}
		if (key == 'w') {	/* hold the 2# */
			if (held_soundscape == 0) { current_sound = held0_w; }
			else if (held_soundscape == 1) { current_sound = held1_w; }
			else if (held_soundscape == 2) { current_sound = held2_w; }
			else { current_sound = held3_w; }
		}
		if (key == '3') {	/* hold the 3 */
			if (held_soundscape == 0) { current_sound = held0_3; }
			else if (held_soundscape == 1) { current_sound = held1_3; }
			else if (held_soundscape == 2) { current_sound = held2_3; }
			else { current_sound = held3_3; }
		}
		if (key == '4') {	/* hold the 4 */
			if (held_soundscape == 0) { current_sound = held0_4; }
			else if (held_soundscape == 1) { current_sound = held1_4; }
			else if (held_soundscape == 2) { current_sound = held2_4; }
			else { current_sound = held3_4; }
		}
		if (key == 'r') {	/* hold the 4# */
			if (held_soundscape == 0) { current_sound = held0_r; }
			else if (held_soundscape == 1) { current_sound = held1_r; }
			else if (held_soundscape == 2) { current_sound = held2_r; }
			else { current_sound = held3_r; }
		}
		if (key == '5') {	/* hold the 5 */
			if (held_soundscape == 0) { current_sound = held0_5; }
			else if (held_soundscape == 1) { current_sound = held1_5; }
			else if (held_soundscape == 2) { current_sound = held2_5; }
			else { current_sound = held3_5; }
		}
		if (key == 't') {	/* hold the 5# */
			if (held_soundscape == 0) { current_sound = held0_t; }
			else if (held_soundscape == 1) { current_sound = held1_t; }
			else if (held_soundscape == 2) { current_sound = held2_t; }
			else { current_sound = held3_t; }
		}
		if (key == '6') {	/* hold the 6 */
			if (held_soundscape == 0) { current_sound = held0_6; }
			else if (held_soundscape == 1) { current_sound = held1_6; }
			else if (held_soundscape == 2) { current_sound = held2_6; }
			else { current_sound = held3_6; }
		}
		if (key == 'y') {	/* hold the 6# */
			if (held_soundscape == 0) { current_sound = held0_y; }
			else if (held_soundscape == 1) { current_sound = held1_y; }
			else if (held_soundscape == 2) { current_sound = held2_y; }
			else { current_sound = held3_y; }
		}
		if (key == '7') {	/* hold the 7 */
			if (held_soundscape == 0) { current_sound = held0_7; }
			else if (held_soundscape == 1) { current_sound = held1_7; }
			else if (held_soundscape == 2) { current_sound = held2_7; }
			else { current_sound = held3_7; }
		}
		if (key == '8') {	/* hold the 8 */
			if (held_soundscape == 0) { current_sound = held0_8; }
			else if (held_soundscape == 1) { current_sound = held1_8; }
			else if (held_soundscape == 2) { current_sound = held2_8; }
			else { current_sound = held3_8; }
		}
		if (held_plus_count == 0) { current_sound.setSpeed(.5); }
		else if (held_plus_count == 1) { current_sound.setSpeed(1); }
		else if (held_plus_count == 2) { current_sound.setSpeed(1.5); }
		else { current_sound.setSpeed(2); }
		if (!current_sound.isPlaying()) {
			current_sound.play();
			notes_queue.push(current_sound);
		}
		
	}

	/************************************************** PLAYED NOTES *******************************************************/
	if (key == 'a' || key == 'z' || key == 's' || key == 'x' || key == 'd' || key == 'f' || key == 'v' || key == 'g' ||
		key == 'b' || key == 'h' || key == 'n' || key == 'j' || key == 'k') {
		if (key == 'a') {	/* play the 1 */
			if (short_soundscape == 0) { current_sound = short0_a; }
			else if (short_soundscape == 1) { current_sound = short1_a; }
			else if (short_soundscape == 2) { current_sound = short2_a; }
			else { current_sound = short3_a; }
		}
		if (key == 'z') {	/* play the 1# */
			if (short_soundscape == 0) { current_sound = short0_z; }
			else if (short_soundscape == 1) { current_sound = short1_z; }
			else if (short_soundscape == 2) { current_sound = short2_z; }
			else { current_sound = short3_z; }
		}
		if (key == 's') {	/* play the 2 */
			if (short_soundscape == 0) { current_sound = short0_s; }
			else if (short_soundscape == 1) { current_sound = short1_s; }
			else if (short_soundscape == 2) { current_sound = short2_s; }
			else { current_sound = short3_s; }
		}
		if (key == 'x') {	/* play the 2# */
			if (short_soundscape == 0) { current_sound = short0_x; }
			else if (short_soundscape == 1) { current_sound = short1_x; }
			else if (short_soundscape == 2) { current_sound = short2_x; }
			else { current_sound = short3_x; }
		}
		if (key == 'd') {	/* play the 3 */
			if (short_soundscape == 0) { current_sound = short0_d; }
			else if (short_soundscape == 1) { current_sound = short1_d; }
			else if (short_soundscape == 2) { current_sound = short2_d; }
			else { current_sound = short3_d; }
		}
		if (key == 'f') {	/* play the 4 */
			if (short_soundscape == 0) { current_sound = short0_f; }
			else if (short_soundscape == 1) { current_sound = short1_f; }
			else if (short_soundscape == 2) { current_sound = short2_f; }
			else { current_sound = short3_f; }
		}
		if (key == 'v') {	/* play the 4# */
			if (short_soundscape == 0) { current_sound = short0_v; }
			else if (short_soundscape == 1) { current_sound = short1_v; }
			else if (short_soundscape == 2) { current_sound = short2_v; }
			else { current_sound = short3_v; }
		}
		if (key == 'g') {	/* play the 5 */
			if (short_soundscape == 0) { current_sound = short0_g; }
			else if (short_soundscape == 1) { current_sound = short1_g; }
			else if (short_soundscape == 2) { current_sound = short2_g; }
			else { current_sound = short3_g; }
		}
		if (key == 'b') {	/* play the 5# */
			if (short_soundscape == 0) { current_sound = short0_b; }
			else if (short_soundscape == 1) { current_sound = short1_b; }
			else if (short_soundscape == 2) { current_sound = short2_b; }
			else { current_sound = short3_b; }
		}
		if (key == 'h') {	/* play the 6 */
			if (short_soundscape == 0) { current_sound = short0_h; }
			else if (short_soundscape == 1) { current_sound = short1_h; }
			else if (short_soundscape == 2) { current_sound = short2_h; }
			else { current_sound = short3_h; }
		}
		if (key == 'n') {	/* play the 6# */
			if (short_soundscape == 0) { current_sound = short0_n; }
			else if (short_soundscape == 1) { current_sound = short1_n; }
			else if (short_soundscape == 2) { current_sound = short2_n; }
			else { current_sound = short3_n; }
		}
		if (key == 'j') {	/* play the 7 */
			if (short_soundscape == 0) { current_sound = short0_j; }
			else if (short_soundscape == 1) { current_sound = short1_j; }
			else if (short_soundscape == 2) { current_sound = short2_j; }
			else { current_sound = short3_j; }
		}
		if (key == 'k') {	/* play the 8 */
			if (short_soundscape == 0) { current_sound = short0_k; }
			else if (short_soundscape == 1) { current_sound = short1_k; }
			else if (short_soundscape == 2) { current_sound = short2_k; }
			else { current_sound = short3_k; }
		}
		if (short_plus_count == 0) { current_sound.setSpeed(.5); }
		else if (short_plus_count == 1) { current_sound.setSpeed(1); }
		else if (short_plus_count == 2) { current_sound.setSpeed(1.5); }
		else { current_sound.setSpeed(2); }
		if (!current_sound.isPlaying()) {
			current_sound.play();
		}
	}

		/***************************** held note change *************************************/
		if (key == '-') {	/* go down a half step */
			if (held_plus_count == 0) {	held_plus_count = 3; }
			else { held_plus_count -= 1; }
		}
		if (key == '=') {	/* go up a half step */
			if (held_plus_count == 3) {	held_plus_count = 0; }
			else { held_plus_count += 1; }
		}

		/************************ change the soundscape ************************************/
		if (key == '[') {
			if (held_soundscape == 0) { held_soundscape = 3; }
			else { held_soundscape -= 1; }
		}
		if (key == ']') {
			if (held_soundscape == 3) { held_soundscape = 0; }
			else { held_soundscape += 1; }
		}



		/***************************** short note speed change ******************************/
		if (key == ',') {	/* go down a half step (the < button)*/
			if (short_plus_count == 0) { short_plus_count = 3; }
			else { short_plus_count -= 1; }
		}
		if (key == '.') {	/* go up a half step (the > button)*/
			if (short_plus_count == 3) { short_plus_count = 0; }
			else { short_plus_count += 1; }
		}

		/****************************** change the short soundscape *****************************/
		if (key == ';') {
			if (short_soundscape == 0) { short_soundscape = 3; }
			else { short_soundscape -= 1; }
		}
		if (key == '\'') {
			if (short_soundscape == 3) { short_soundscape = 0; }
			else { short_soundscape += 1; }
		}

		/********************************* dequeue the held notes with backspace ***************************/
		if (key == OF_KEY_BACKSPACE) {
			if (!notes_queue.empty()) {
				ofSoundPlayer current_note = notes_queue.front();
				notes_queue.pop();
				current_note.stop();
			}
		}
}

//---------------------------------------------------------------------------------------------------------------------------------------
void ofApp::keyReleased(int key){
	/************************** stop the short notes if the key is released *************************************************/
	if (key == 'a' || key == 'z' || key == 's' || key == 'x' || key == 'd' || key == 'f' || key == 'v' || key == 'g' ||
		key == 'b' || key == 'h' || key == 'n' || key == 'j' || key == 'k') {
		if (key == 'a') {	/* play the 1 */
			if (short_soundscape == 0) { current_sound = short0_a; }
			else if (short_soundscape == 1) { current_sound = short1_a; }
			else if (short_soundscape == 2) { current_sound = short2_a; }
			else { current_sound = short3_a; }
		}
		if (key == 'z') {	/* play the 1# */
			if (short_soundscape == 0) { current_sound = short0_z; }
			else if (short_soundscape == 1) { current_sound = short1_z; }
			else if (short_soundscape == 2) { current_sound = short2_z; }
			else { current_sound = short3_z; }
		}
		if (key == 's') {	/* play the 2 */
			if (short_soundscape == 0) { current_sound = short0_s; }
			else if (short_soundscape == 1) { current_sound = short1_s; }
			else if (short_soundscape == 2) { current_sound = short2_s; }
			else { current_sound = short3_s; }
		}
		if (key == 'x') {	/* play the 2# */
			if (short_soundscape == 0) { current_sound = short0_x; }
			else if (short_soundscape == 1) { current_sound = short1_x; }
			else if (short_soundscape == 2) { current_sound = short2_x; }
			else { current_sound = short3_x; }
		}
		if (key == 'd') {	/* play the 3 */
			if (short_soundscape == 0) { current_sound = short0_d; }
			else if (short_soundscape == 1) { current_sound = short1_d; }
			else if (short_soundscape == 2) { current_sound = short2_d; }
			else { current_sound = short3_d; }
		}
		if (key == 'f') {	/* play the 4 */
			if (short_soundscape == 0) { current_sound = short0_f; }
			else if (short_soundscape == 1) { current_sound = short1_f; }
			else if (short_soundscape == 2) { current_sound = short2_f; }
			else { current_sound = short3_f; }
		}
		if (key == 'v') {	/* play the 4# */
			if (short_soundscape == 0) { current_sound = short0_v; }
			else if (short_soundscape == 1) { current_sound = short1_v; }
			else if (short_soundscape == 2) { current_sound = short2_v; }
			else { current_sound = short3_v; }
		}
		if (key == 'g') {	/* play the 5 */
			if (short_soundscape == 0) { current_sound = short0_g; }
			else if (short_soundscape == 1) { current_sound = short1_g; }
			else if (short_soundscape == 2) { current_sound = short2_g; }
			else { current_sound = short3_g; }
		}
		if (key == 'b') {	/* play the 5# */
			if (short_soundscape == 0) { current_sound = short0_b; }
			else if (short_soundscape == 1) { current_sound = short1_b; }
			else if (short_soundscape == 2) { current_sound = short2_b; }
			else { current_sound = short3_b; }
		}
		if (key == 'h') {	/* play the 6 */
			if (short_soundscape == 0) { current_sound = short0_h; }
			else if (short_soundscape == 1) { current_sound = short1_h; }
			else if (short_soundscape == 2) { current_sound = short2_h; }
			else { current_sound = short3_h; }
		}
		if (key == 'n') {	/* play the 6# */
			if (short_soundscape == 0) { current_sound = short0_n; }
			else if (short_soundscape == 1) { current_sound = short1_n; }
			else if (short_soundscape == 2) { current_sound = short2_n; }
			else { current_sound = short3_n; }
		}
		if (key == 'j') {	/* play the 7 */
			if (short_soundscape == 0) { current_sound = short0_j; }
			else if (short_soundscape == 1) { current_sound = short1_j; }
			else if (short_soundscape == 2) { current_sound = short2_j; }
			else { current_sound = short3_j; }
		}
		if (key == 'k') {	/* play the 8 */
			if (short_soundscape == 0) { current_sound = short0_k; }
			else if (short_soundscape == 1) { current_sound = short1_k; }
			else if (short_soundscape == 2) { current_sound = short2_k; }
			else { current_sound = short3_k; }
		}
		current_sound.stop();
	}

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
