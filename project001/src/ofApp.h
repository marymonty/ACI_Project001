#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		/*make the queue of notes that are playing*/
		queue<ofSoundPlayer> notes_queue;

		/*make a set for the short notes playing so that holding a key isnt fucked up*/
		set<ofSoundPlayer> short_note_set;
		
		/*piano*/
		ofSoundPlayer held0_1;
		ofSoundPlayer held0_q;
		ofSoundPlayer held0_2;
		ofSoundPlayer held0_w;
		ofSoundPlayer held0_3;
		ofSoundPlayer held0_4;
		ofSoundPlayer held0_r;
		ofSoundPlayer held0_5;
		ofSoundPlayer held0_t;
		ofSoundPlayer held0_6;
		ofSoundPlayer held0_y;
		ofSoundPlayer held0_7;
		ofSoundPlayer held0_8;

		/*percussive*/
		ofSoundPlayer held1_1;
		ofSoundPlayer held1_q;
		ofSoundPlayer held1_2;
		ofSoundPlayer held1_w;
		ofSoundPlayer held1_3;
		ofSoundPlayer held1_4;
		ofSoundPlayer held1_r;
		ofSoundPlayer held1_5;
		ofSoundPlayer held1_t;
		ofSoundPlayer held1_6;
		ofSoundPlayer held1_y;
		ofSoundPlayer held1_7;
		ofSoundPlayer held1_8;

		/*voice?*/
		ofSoundPlayer held2_1;
		ofSoundPlayer held2_q;
		ofSoundPlayer held2_2;
		ofSoundPlayer held2_w;
		ofSoundPlayer held2_3;
		ofSoundPlayer held2_4;
		ofSoundPlayer held2_r;
		ofSoundPlayer held2_5;
		ofSoundPlayer held2_t;
		ofSoundPlayer held2_6;
		ofSoundPlayer held2_y;
		ofSoundPlayer held2_7;
		ofSoundPlayer held2_8;

		/*birds?*/
		ofSoundPlayer held3_1;
		ofSoundPlayer held3_q;
		ofSoundPlayer held3_2;
		ofSoundPlayer held3_w;
		ofSoundPlayer held3_3;
		ofSoundPlayer held3_4;
		ofSoundPlayer held3_r;
		ofSoundPlayer held3_5;
		ofSoundPlayer held3_t;
		ofSoundPlayer held3_6;
		ofSoundPlayer held3_y;
		ofSoundPlayer held3_7;
		ofSoundPlayer held3_8;

		ofSoundPlayer short0_a;
		ofSoundPlayer short0_z;
		ofSoundPlayer short0_s;
		ofSoundPlayer short0_x;
		ofSoundPlayer short0_d;
		ofSoundPlayer short0_f;
		ofSoundPlayer short0_v;
		ofSoundPlayer short0_g;
		ofSoundPlayer short0_b;
		ofSoundPlayer short0_h;
		ofSoundPlayer short0_n;
		ofSoundPlayer short0_j;
		ofSoundPlayer short0_k;

		ofSoundPlayer short1_a;
		ofSoundPlayer short1_z;
		ofSoundPlayer short1_s;
		ofSoundPlayer short1_x;
		ofSoundPlayer short1_d;
		ofSoundPlayer short1_f;
		ofSoundPlayer short1_v;
		ofSoundPlayer short1_g;
		ofSoundPlayer short1_b;
		ofSoundPlayer short1_h;
		ofSoundPlayer short1_n;
		ofSoundPlayer short1_j;
		ofSoundPlayer short1_k;

		ofSoundPlayer short2_a;
		ofSoundPlayer short2_z;
		ofSoundPlayer short2_s;
		ofSoundPlayer short2_x;
		ofSoundPlayer short2_d;
		ofSoundPlayer short2_f;
		ofSoundPlayer short2_v;
		ofSoundPlayer short2_g;
		ofSoundPlayer short2_b;
		ofSoundPlayer short2_h;
		ofSoundPlayer short2_n;
		ofSoundPlayer short2_j;
		ofSoundPlayer short2_k;
	
		ofSoundPlayer short3_a;
		ofSoundPlayer short3_z;
		ofSoundPlayer short3_s;
		ofSoundPlayer short3_x;
		ofSoundPlayer short3_d;
		ofSoundPlayer short3_f;
		ofSoundPlayer short3_v;
		ofSoundPlayer short3_g;
		ofSoundPlayer short3_b;
		ofSoundPlayer short3_h;
		ofSoundPlayer short3_n;
		ofSoundPlayer short3_j;
		ofSoundPlayer short3_k;
};