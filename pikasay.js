/**
 * Created by tenggerx on 2017/4/11.
 */
function pikasay() {
    var msgbox = ""
    console.log("欢迎光临~本网页由TGRX·焦糖狐参照Firedom(皮酱)的一个皮卡丘翻译器制作的在线版小游戏")
    document.getElementById("form").onsubmit=function(event){
        event.preventDefault();
        var usrin = document.getElementById("input").value;
        msgbox += msggen(0,usrin);
        document.getElementById("dlg").innerHTML=msgbox;
        var delaytime = Math.random()*5000; //仿真延时233
        setTimeout(function(){msgbox += msggen(1,getword(usrin));document.getElementById("dlg").innerHTML=msgbox;},delaytime);
        document.getElementById("input").value="";
    }
}


function msggen(who,msg){
    if(who == 1){
        var classname = "pikachat";
        var imgsrc = "images/pikachu.png";
        var msglhs = "";
        var msgrhs = msg;
    }else{
        var classname = "userchat";
        var imgsrc = "images/user.jpg";
        var msglhs = msg;
        var msgrhs = "";
    }
    var pika = '<div class='+classname+' id='+classname+'>'+
            '<p>'+
            msglhs+' <img src='+imgsrc+' alt="avat" height="50" width="50"> '+ msgrhs +
            '</p>'+
            '</div>';
    return  pika;
}


// Base on the idea of firedom(皮酱)： https://github.com/firedom/pikachu-lang/blob/master/pikachu.py
function getword(msgin) {
    output = ''
    for (var i=0;i<msgin.length;i++){
        var s = msgin.charAt(i).toLowerCase();
        if (s == 'a') {
            output += 'chu~';
            continue;
        }
        if (s == 'b') {
            output += 'chukapi~';
            continue;
        }
        if (s == 'c') {
            output += 'pikachu~';
            continue;
        }
        if (s == 'd') {
            output += 'pikapi~';
            continue;
        }
        if (s == 'e') {
            output += 'pi~';
            continue;
        }
        if (s == 'f') {
            output += 'kachupi~';
            continue;
        }
        if (s == 'g') {
            output += 'kachuka~';
            continue;
        }
        if (s == 'h') {
            output += 'chuka~';
            continue;
        }
        if (s == 'i') {
            output += 'pichu~';
            continue;
        }
        if (s == 'j') {
            output += 'pikapika~';
            continue;
        }
        if (s == 'k') {
            output += 'chukachu~';
            continue;
        }
        if (s == 'l') {
            output += 'pichupi~';
            continue;
        }
        if (s == 'm') {
            output += 'pichuka~';
            continue;
        }
        if (s == 'n') {
            output += 'kapi~';
            continue;
        }
        if (s == 'o') {
            output += 'pika~';
            continue;
        }
        if (s == 'p') {
            output += 'kapika~';
            continue;
        }
        if (s == 'q') {
            output += 'kachukachu~';
            continue;
        }
        if (s == 'r') {
            output += 'kachu~';
            continue;
        }
        if (s == 's') {
            output += 'chupi~';
            continue;
        }
        if (s == 't') {
            output += 'ka~';
            continue;
        }
        if (s == 'u') {
            output += 'kapichu~';
            continue;
        }
        if (s == 'v') {
            output += 'pichupichu~';
            continue;
        }
        if (s == 'w') {
            output += 'chupika~';
            continue;
        }
        if (s == 'x') {
            output += 'kapichuka~';
            continue;
        }
        if (s == 'y') {
            output += 'chupichu~';
            continue;
        }
        if (s == 'z') {
            output += 'chupichuka~';
            continue;
        }
        if (s == '0') {
            output += 'pikachupi~';
            continue;
        }
        if(s == '1') {
            output += 'pikachuka~';
            continue;
        }
        if (s == '2') {
            output += 'pichukapi~';
            continue;
        }
        if (s == '3') {
            output += 'pichukachu~';
            continue;
        }
        if (s == '4') {
            output += 'kapikachu~';
            continue;
        }
        if (s == '5') {
            output += 'kapichuka~';
            continue;
        }
        if (s == '6') {
            output += 'kachupichu~';
            continue;
        }
        if (s == '7') {
            output += 'chukapika~';
            continue;
        }
        if (s == '8') {
            output += 'chukapichu~';
            continue;
        }
        if (s == '9') {
            output += 'chukachupi~';
            continue;
        }
        if (s == ' ') {
            output += '~';
            continue;
        }
        output += s;
    }
    return output
}
