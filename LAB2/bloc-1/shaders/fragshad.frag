#version 330 core

out vec4 FragColor;
in vec4 outcolors;

void rallate() {
    FragColor = vec4(1.0);
    int y = int(gl_FragCoord.y)/10;
    
    if(gl_FragCoord.x < 354) {
        if (y%2 == 0) {
            if (gl_FragCoord.y < 300) {FragColor = vec4(1, 0, 0, 1);}
            if (gl_FragCoord.y >= 300) {FragColor = vec4(0, 1, 0, 1);}
        }
        
        else discard;
    }
    
    else if(gl_FragCoord.x > 354) {
        if (y%2 == 0) {
            if (gl_FragCoord.y < 300) {FragColor = vec4(1, 1, 0, 1);}
            if (gl_FragCoord.y >= 300) {FragColor = vec4(0, 1, 1, 1);}
        }
        
        else discard;
        
    }
    
    else discard;
}

void main() {
    //rallate();
    FragColor = outcolors;
}

