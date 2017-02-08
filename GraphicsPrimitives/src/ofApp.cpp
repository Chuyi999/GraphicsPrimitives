#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(197,228,240);

    }


//--------------------------------------------------------------
void ofApp::update(){
   }

//--------------------------------------------------------------
void ofApp::draw(){
    
 
    
    //----bird mouse--//
    ofFill();
        if (mouseX < 501 & mouseX > 365 & mouseY <252 & mouseY> 136 ){
    ofSetColor(20,28,38);
    ofDrawTriangle(432, 227, 449, 213, 415, 209);
    ofSetColor(67,105,123);

    ofDrawTriangle(422, 176, 441, 199, 415, 209);

        
    }else{
        
    ofSetColor(20,28,38);
    ofDrawTriangle(432, 222, 451, 209, 415, 209);
    ofSetColor(67,105,123);

    ofDrawTriangle(432, 186, 451, 209, 415, 209);


    
    }
    
    //----bird head---//
    ofSetColor(25,45,66);
    ofBeginShape();
    ofVertex(424, 153);
    ofVertex(446, 140);
    ofVertex(463, 182);
    ofVertex(441, 197);
    ofVertex(432, 186);
    ofEndShape();
    
    ofSetColor(24,40,60);
    ofBeginShape();
    ofVertex(373, 160);
    ofVertex(424, 153);
    ofVertex(432, 186);
    ofVertex(425, 196);
    ofEndShape();
    
    ofSetColor(25,46,71);
    ofBeginShape();
    ofVertex(373, 160);
    ofVertex(372, 207);
    ofVertex(418, 206);
    ofVertex(425, 196);
    ofEndShape();
    
    ofSetColor(19,36,65);
    ofDrawTriangle(373, 160, 372, 207, 323, 157);
    ofSetColor(23,43,71);
    ofDrawTriangle(310, 189, 372, 207, 323, 157);
    
    ofSetColor(22,41,70);
    ofDrawTriangle(310, 189, 300, 143, 323, 157);
    ofSetColor(20,36,67);
    ofDrawTriangle(310, 189, 300, 143, 285, 162);
    
    //---2nd---//
    ofSetColor(27,50,84);
    ofBeginShape();
    ofVertex(318, 132);
    ofVertex(331, 142);
    ofVertex(323, 157);
    ofVertex(300, 143);
    ofEndShape();
    
    ofSetColor(31,56,87);
    ofBeginShape();
    ofVertex(331, 142);
    ofVertex(374, 143);
    ofVertex(373, 160);
    ofVertex(323, 157);
    ofEndShape();
    
    
    ofSetColor(93,107,114);
    ofBeginShape();
    ofVertex(374, 143);
    ofVertex(416, 138);
    ofVertex(424, 153);
    ofVertex(373, 160);
    ofEndShape();
    
    ofSetColor(37,62,90);
    ofBeginShape();
    ofVertex(416, 138);
    ofVertex(433, 128);
    ofVertex(446, 140);
    ofVertex(424, 153);
    ofEndShape();
    
    //---3rd---//
    ofSetColor(132,144,149);
    ofBeginShape();
    ofVertex(374, 113);
    ofVertex(415, 117);
    ofVertex(433, 128);
    ofVertex(416, 138);
    ofEndShape();
    
    ofSetColor(43,76,102);
    ofDrawTriangle(374, 113, 416, 138, 374, 143);
    ofSetColor(90,110,120);
    ofDrawTriangle(374, 113, 374, 143, 331, 142);
    
    ofSetColor(132,144,149);
    ofBeginShape();
    ofVertex(374, 113);
    ofVertex(331, 142);
    ofVertex(318, 132);
    ofVertex(334, 119);
    ofEndShape();

    //------face-----//
    ofSetColor(209,222,220);
    ofBeginShape();
    ofVertex(285, 162);
    ofVertex(310, 189);
    ofVertex(296, 238);
    ofVertex(272, 201);
    ofEndShape();
    
    ofSetColor(225,230,225);
    ofBeginShape();
    ofVertex(310, 189);
    ofVertex(372, 207);
    ofVertex(370, 220);
    ofVertex(296, 238);
    ofEndShape();
    
    ofSetColor(237,239,230);
    ofBeginShape();
    ofVertex(372, 207);
    ofVertex(418, 206);
    ofVertex(415, 209);
    ofVertex(370, 220);
    ofEndShape();
    
    ofSetColor(220,219,194);
    ofBeginShape();
    ofVertex(441, 197);
    ofVertex(463, 182);
    ofVertex(462, 198);
    ofVertex(446, 202);
    ofEndShape();
    
    
    ofSetColor(9,21,31);
    ofBeginShape();
    ofVertex(296, 238);
    ofVertex(415, 209);
    ofVertex(432, 222);
    ofVertex(429, 266);
    ofVertex(362, 264);
    ofEndShape();
    
    ofSetColor(39,44,47);
    ofBeginShape();
    ofVertex(446, 202);
    ofVertex(462, 198);
    ofVertex(456, 240);
    ofVertex(429, 266);
    ofVertex(432, 222);
    ofVertex(451, 209);
    ofEndShape();
    
    
    
    //-----trunk-----//
    
    ofSetColor(248,242,243);
    ofBeginShape();
    ofVertex(57, 600);
    ofVertex(600, 260);
    ofVertex(600, 308);
    ofVertex(146, 600);
    ofEndShape();
    //---shadow--//
    ofSetColor(240,240,234);
    ofBeginShape();
    ofVertex(100, 600);
    ofVertex(600, 280);
    ofVertex(600, 308);
    ofVertex(146, 600);
    ofEndShape();
    
    ofSetColor(41,75,104);
    ofBeginShape();
    ofVertex(146, 600);
    ofVertex(600, 308);
    ofVertex(600, 318);
    ofVertex(155, 600);
    ofEndShape();
    

    
    
    
    //----leg----//
    
    ofSetColor(209,220,183);
    ofDrawRectangle(238, 403, 13, 13);
    ofSetColor(47,49,48);
    ofDrawRectangle(241, 416, 7, 73);
    ofDrawTriangle(241, 482, 230, 486, 241, 489);
    ofDrawTriangle(241, 489, 246, 524, 246, 489);
    ofDrawTriangle(241, 487, 262, 511, 248, 489);
    
    ofDrawRectangle(241+X, 416-Y, 7, 73);
    ofDrawTriangle(241+X, 482-Y, 230+X, 486-Y, 241+X, 489-Y);
    ofDrawTriangle(241+X, 489-Y, 246+X, 524-Y, 246+X, 489-Y);
    ofDrawTriangle(241+X, 487-Y, 262+X, 511-Y, 248+X, 489-Y);
    
    
    

    
    
    
    //----belly---//
    
    ofSetColor(232,225,181);
    ofBeginShape();
    ofVertex(296, 238);
    ofVertex(362, 264);
    ofVertex(bellypoinX, bellypoinY);
    ofVertex(259, 311);
    ofEndShape();
    
    ofSetColor(235,212,120);
    ofBeginShape();
    ofVertex(362, 264);
    ofVertex(429, 266);
    ofVertex(385, 378);
    ofVertex(bellypoinX, bellypoinY);
    ofEndShape();
    
    ofSetColor(224,194,74);
    ofBeginShape();
    ofVertex(429, 266);
    ofVertex(456, 240);
    ofVertex(424, 337);
    ofVertex(385, 378);
    ofEndShape();
    
    ofSetColor(219,212,170);
    ofBeginShape();
    ofVertex(259, 311);
    ofVertex(bellypoinX, bellypoinY);
    ofVertex(238,403);
    ofVertex(191, 340);
    ofEndShape();
    
    
    ofSetColor(224,194,74);
    ofBeginShape();
    ofVertex(bellypoinX, bellypoinY);
    ofVertex(385, 378);
    ofVertex(290,416);
    ofVertex(238,403);
    ofEndShape();
    
    
    
    //----neck---//
    
    ofSetColor(26,48,87);
    ofBeginShape();
    ofVertex(296, 238);
    ofVertex(303, 264);
    ofVertex(335, 278);
    ofVertex(362, 264);
    ofEndShape();
    
    ofSetColor(26,48,87);
    ofBeginShape();
    ofVertex(362, 264);
    ofVertex(378, 286);
    ofVertex(407, 284);
    ofVertex(427, 265);
    
    ofEndShape();
    
    ofSetColor(26,48,87);
    ofBeginShape();
    ofVertex(429, 266);
    ofVertex(432, 279);
    ofVertex(450, 263);
    ofVertex(457, 239);
    ofEndShape();


    

    
    //----Wing----//
    ofSetColor(47,86,131);
    ofDrawTriangle(272, 201, 296, 238, 259, 311);
    
    ofSetColor(40,78,125);
    ofBeginShape();
    ofVertex(272, 201);
    ofVertex(259, 311);
    ofVertex(191, 340);
    ofVertex(193,257);
    ofEndShape();
    
    ofSetColor(47,86,131);
    ofDrawTriangle(193,257, 191, 340, 164, 293);
    ofSetColor(48,70,91);
    ofDrawTriangle(193,257, 164, 293, 143, 283);
    
    ofSetColor(122,160,180);
    ofBeginShape();
    ofVertex(143, 283);
    ofVertex(235, 206);
    ofVertex(280, 177);
    ofVertex(272, 201);
    ofVertex(193,257);
    ofEndShape();
    
    //----tale----//
    
    ofSetColor(47,49,48);
    ofBeginShape();
    ofVertex(155, 289);
    ofVertex(167, 295);
    ofVertex(86, 346);
    ofVertex(67, 342);
    ofEndShape();
    ofSetColor(37,39,38);
    ofDrawTriangle(155, 289, 60, 339, 33, 370);
    
  
    

    for(int i= 0; i < 10; i++){
        ofSetColor(137, 198, 163);
        ofDrawCircle(mouseX+i, mouseY+7*i, 8);
        
    }
    ofSetColor(37,39,38);
    ofDrawCircle(mouseX, mouseY, 3);
    

    



    
    

    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
