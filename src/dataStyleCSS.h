const char CSS_STYLE[] PROGMEM = R"=====(
.container{position:relative;width:79%;margin:20px;box-sizing:border-box}.column,.columns{width:100%;float:left}.card{margin-top:2%;border-radius:6px;box-shadow:0 4px 4px rgba(204,197,185,0.5);padding-left:20px;padding-right:20px;margin-bottom:10px;min-width:500px;color:#fff}@media(max-width:630px){.card{min-width:98%}}.card-slider{padding-bottom:10px}.turquoise{background:#1abc9c;border-bottom:#16a085 3px solid}.emerald{background:#2ecc71;border-bottom:#27ae60 3px solid}.peterriver{background:#3498db;border-bottom:#2980b9 3px solid}.wetasphalt{background:#34495e;border-bottom:#2c3e50 3px solid}.sunflower{background:#f1c40f;border-bottom:#e6bb0f 3px solid}.carrot{background:#e67e22;border-bottom:#d35400 3px solid}.alizarin{background:#e74c3c;border-bottom:#c0392b 3px solid}.dark{background:#444857;border-bottom:#444857 3px solid}.label{box-sizing:border-box;white-space:nowrap;border-radius:.2em;padding:.12em .4em .14em;text-align:center;color:#fff;font-weight:700;line-height:1;margin-bottom:5px;display:inline-block;white-space:nowrap;vertical-align:baseline;position:relative;top:-.15em;background-color:#999;margin-bottom:10px}.label-wrap{width:90%;white-space:pre-wrap;word-wrap:break-word}.label.color-blue{background-color:#6f9ad1}.label.color-red{background-color:#d37c7c}.label.color-green{background-color:#9bc268}.label.color-orange{background-color:#dea154}.label.color-yellow{background-color:#e9d641}.label.color-purple{background-color:#9f83d1}@media(min-width:400px){.container{width:84%}}@media(min-width:630px){.container{width:98%}.column,.columns{margin-right:2%}.column:first-child,.columns:first-child{margin-left:0}.one.column,.one.columns{width:4.66666666667%}.two.columns{width:13.3333333333%}.three.columns{width:22%}.four.columns{width:30.6666666667%}.five.columns{width:39.3333333333%}.six.columns{width:48%}.seven.columns{width:56.6666666667%}.eight.columns{width:65.3333333333%}.nine.columns{width:74%}.ten.columns{width:82.6666666667%}.eleven.columns{width:91.3333333333%}.twelve.columns{width:100%;margin-left:0}.one-third.column{width:30.6666666667%}.two-thirds.column{width:65.3333333333%}.one-half.column{width:48%}.offset-by-one.column,.offset-by-one.columns{margin-left:8.66666666667%}.offset-by-two.column,.offset-by-two.columns{margin-left:17.3333333333%}.offset-by-three.column,.offset-by-three.columns{margin-left:26%}.offset-by-four.column,.offset-by-four.columns{margin-left:34.6666666667%}.offset-by-five.column,.offset-by-five.columns{margin-left:43.3333333333%}.offset-by-six.column,.offset-by-six.columns{margin-left:52%}.offset-by-seven.column,.offset-by-seven.columns{margin-left:60.6666666667%}.offset-by-eight.column,.offset-by-eight.columns{margin-left:69.3333333333%}.offset-by-nine.column,.offset-by-nine.columns{margin-left:78%}.offset-by-ten.column,.offset-by-ten.columns{margin-left:86.6666666667%}.offset-by-eleven.column,.offset-by-eleven.columns{margin-left:95.3333333333%}.offset-by-one-third.column,.offset-by-one-third.columns{margin-left:34.6666666667%}.offset-by-two-thirds.column,.offset-by-two-thirds.columns{margin-left:69.3333333333%}.offset-by-one-half.column,.offset-by-one-half.columns{margin-left:52%}}html{font-size:62.5%}body{margin:0;font-size:1.5em;line-height:1;font-weight:400;font-family:"Open Sans",sans-serif;color:#222;background-color:#ecf0f1}h1,h2,h3,h4,h5,h6{margin-top:0;margin-bottom:.5rem;font-weight:300}h1{font-size:4rem;line-height:1.2;letter-spacing:-.1rem}h2{font-size:3.6rem;line-height:1.25;letter-spacing:-.1rem}h3{font-size:3rem;line-height:1.3;letter-spacing:-.1rem}h4{font-size:2.4rem;line-height:1.35;letter-spacing:-.08rem}h5{font-size:1.8rem;line-height:1.5;letter-spacing:-.05rem}h6{font-size:1.5rem;line-height:1.6;letter-spacing:0}@media(min-width:630px){h1{font-size:5rem}h2{font-size:4.2rem}h3{font-size:3.6rem}h4{font-size:3rem}h5{font-size:2rem}h6{font-size:1.5rem}}p{margin-top:0}a{color:#1eaedb}a:hover{color:#0fa0ce}button{display:inline-block;padding:10px;border-radius:3px;color:#fff;background-color:#999}#mainHeader{display:inline-block}#conStatus{position:inherit;font-size:.75em}button,.button{margin-bottom:1rem}.u-full-width{width:100%;box-sizing:border-box}.u-max-full-width{max-width:100%;box-sizing:border-box}.u-pull-right{float:right}.u-pull-left{float:left}.tcenter{text-align:center}hr{margin-top:.5rem;margin-bottom:1.2rem;border-width:0;border-top:1px solid #e1e1e1}.container:after,.row:after,.u-cf{content:"";display:table;clear:both}.control{background-color:#ddd;background-image:linear-gradient(hsla(0,0%,0%,0.1),hsla(0,0%,100%,0.1));border-radius:50%;box-shadow:inset 0 1px 1px 1px hsla(0,0%,100%,0.5),0 0 1px 1px hsla(0,0%,100%,0.75),0 0 1px 2px hsla(0,0%,100%,0.25),0 0 1px 3px hsla(0,0%,100%,0.25),0 0 1px 4px hsla(0,0%,100%,0.25),0 0 1px 6px hsla(0,0%,0%,0.75);height:9em;margin:3em auto;position:relative;width:9em}.control ul{height:100%;padding:0;transform:rotate(45deg)}.control li{border-radius:100% 0 0 0;box-shadow:inset -1px -1px 1px hsla(0,0%,100%,0.5),0 0 1px hsla(0,0%,0%,0.75);display:inline-block;height:50%;overflow:hidden;width:50%}.control ul li:nth-child(2){transform:rotate(90deg)}.control ul li:nth-child(3){transform:rotate(-90deg)}.control ul li:nth-child(4){transform:rotate(180deg)}.control ul a{height:200%;position:relative;transform:rotate(-45deg);width:200%}.control a:hover,.control a:focus{background-color:hsla(0,0%,100%,0.25)}.control a{border-radius:50%;color:#333;display:block;font:bold 1em/3 sans-serif;text-align:center;text-decoration:none;text-shadow:0 1px 1px hsla(0,0%,100%,0.4);transition:.15s}.control .confirm{background-color:#ddd;background-image:linear-gradient(hsla(0,0%,0%,0.15),hsla(0,0%,100%,0.25));box-shadow:inset 0 1px 1px 1px hsla(0,0%,100%,0.5),0 0 1px 1px hsla(0,0%,100%,0.25),0 0 1px 2px hsla(0,0%,100%,0.25),0 0 1px 3px hsla(0,0%,100%,0.25),0 0 1px 4px hsla(0,0%,100%,0.25),0 0 1px 6px hsla(0,0%,0%,0.85);left:50%;line-height:3;margin:-1.5em;position:absolute;top:50%;width:3em}.control .confirm:hover,.control .confirm:focus{background-color:#eee}.switch{display:inline-block !important;background-color:#bebebe;border-radius:4px;box-shadow:inset 0 0 6px rgba(0,0,0,0.3);color:#fff;cursor:pointer;display:block;font-size:14px;height:26px;margin-bottom:12px;position:relative;width:60px;-webkit-transition:background-color .2s ease-in-out;-moz-transition:background-color .2s ease-in-out;-o-transition:background-color .2s ease-in-out;-ms-transition:background-color .2s ease-in-out;transition:background-color .2s ease-in-out}.switch.checked{background-color:#76d21d}.switch input[type="checkbox"]{display:none;cursor:pointer;height:10px;left:12px;position:absolute;top:8px;width:10px}.in{position:absolute;top:8px;left:12px;-webkit-transition:left .08s ease-in-out;-moz-transition:left .08s ease-in-out;-o-transition:left .08s ease-in-out;-ms-transition:left .08s ease-in-out;transition:left .08s ease-in-out}.switch.checked div{left:38px}.switch .in:before{background:#fff;background:-moz-linear-gradient(top,#fff 0,#f0f0f0 100%);background:-webkit-gradient(linear,left top,left bottom,color-stop(0,#fff),color-stop(100%,#f0f0f0));background:-webkit-linear-gradient(top,#fff 0,#f0f0f0 100%);background:-o-linear-gradient(top,#fff 0,#f0f0f0 100%);background:-ms-linear-gradient(top,#fff 0,#f0f0f0 100%);background:linear-gradient(to bottom,#fff 0,#f0f0f0 100%);border:1px solid #fff;border-radius:2px;box-shadow:0 0 4px rgba(0,0,0,0.3);content:"";height:18px;position:absolute;top:-5px;left:-9px;width:26px}.switch .in:after{background:#f0f0f0;background:-moz-linear-gradient(top,#f0f0f0 0,#fff 100%);background:-webkit-gradient(linear,left top,left bottom,color-stop(0,#f0f0f0),color-stop(100%,#fff));background:-webkit-linear-gradient(top,#f0f0f0 0,#fff 100%);background:-o-linear-gradient(top,#f0f0f0 0,#fff 100%);background:-ms-linear-gradient(top,#f0f0f0 0,#fff 100%);background:linear-gradient(to bottom,#f0f0f0 0,#fff 100%);border-radius:10px;content:"";height:12px;margin:-1px 0 0 -1px;position:absolute;width:12px}.rkmd-slider{display:block;position:relative;font-size:16px;font-family:"Roboto",sans-serif}.rkmd-slider input[type="range"]{overflow:hidden;position:absolute;width:1px;height:1px;opacity:0}.rkmd-slider input[type="range"]+.slider{display:block;position:relative;width:100%;height:27px;border-radius:13px;background-color:#bebebe}@media(pointer:fine){.rkmd-slider input[type="range"]+.slider{height:4px;border-radius:0}}.rkmd-slider input[type="range"]+.slider .slider-fill{display:block;position:absolute;width:0;height:100%;user-select:none;z-index:1}.rkmd-slider input[type="range"]+.slider .slider-handle{cursor:pointer;position:absolute;top:12px;left:0;width:15px;height:15px;margin-left:-8px;border-radius:50%;transition:all .2s ease;user-select:none;z-index:2}@media(pointer:fine){.rkmd-slider input[type="range"]+.slider .slider-handle{top:-5.5px}}.rkmd-slider input[type="range"]:disabled+.slider{background-color:#b0b0b0 !important}.rkmd-slider input[type="range"]:disabled+.slider .slider-fill,.rkmd-slider input[type="range"]:disabled+.slider .slider-handle{cursor:default !important;background-color:#b0b0b0 !important}.rkmd-slider input[type="range"]:disabled+.slider .slider-fill .slider-label,.rkmd-slider input[type="range"]:disabled+.slider .slider-handle .slider-label{display:none;background-color:#b0b0b0 !important}.rkmd-slider input[type="range"]:disabled+.slider .slider-fill.is-active,.rkmd-slider input[type="range"]:disabled+.slider .slider-handle.is-active{top:-5.5px;width:15px;height:15px;margin-left:-8px}.rkmd-slider input[type="range"]:disabled+.slider .slider-fill.is-active .slider-label,.rkmd-slider input[type="range"]:disabled+.slider .slider-handle.is-active .slider-label{display:none;border-radius:50%;transform:none}.rkmd-slider input[type="range"]:disabled+.slider .slider-handle:active{box-shadow:none !important;transform:scale(1) !important}.rkmd-slider.slider-discrete .slider .slider-handle{position:relative;z-index:1}.rkmd-slider.slider-discrete .slider .slider-handle .slider-label{position:absolute;top:-17.5px;left:4px;width:30px;height:30px;-webkit-transform-origin:50% 100%;transform-origin:50% 100%;border-radius:50%;-webkit-transform:scale(1) rotate(-45deg);transform:scale(1) rotate(-45deg);-webkit-transition:all .2s ease;transition:all .2s ease}@media(pointer:fine){.rkmd-slider.slider-discrete .slider .slider-handle .slider-label{left:-2px;-webkit-transform:scale(0.5) rotate(-45deg);transform:scale(0.5) rotate(-45deg)}}.rkmd-slider.slider-discrete .slider .slider-handle .slider-label span{position:absolute;top:7px;left:0;width:100%;color:#fff;font-size:16px;text-align:center;-webkit-transform:rotate(45deg);transform:rotate(45deg);opacity:0;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none}@media(pointer:fine){.rkmd-slider.slider-discrete .slider .slider-handle .slider-label span{font-size:12px}}.rkmd-slider.slider-discrete .slider .slider-handle.is-active{top:0;margin-left:-2px;width:4px;height:4px}.rkmd-slider.slider-discrete .slider .slider-handle.is-active .slider-label{top:-15px;left:-2px;border-radius:15px 15px 15px 0;-webkit-transform:rotate(-45deg) translate(23px,-25px);transform:rotate(-45deg) translate(23px,-25px)}.rkmd-slider.slider-discrete .slider .slider-handle.is-active .slider-label span{opacity:1}.rkmd-slider.slider-discrete.slider-turquoise .slider-label{background-color:#16a085}.rkmd-slider.slider-discrete.slider-emerald .slider-label{background-color:#27ae60}.peterriver{background:#3498db;border-bottom:#2980b9 3px solid}.rkmd-slider.slider-discrete.slider-peterriver .slider-label{background-color:#2980b9}.wetasphalt{background:#34495e;border-bottom:#2c3e50 3px solid}.rkmd-slider.slider-discrete.slider-wetasphalt .slider-label{background-color:#2c3e50}.sunflower{background:#f1c40f;border-bottom:#e6bb0f 3px solid}.rkmd-slider.slider-discrete.slider-sunflower .slider-label{background-color:#e6bb0f}.carrot{background:#e67e22;border-bottom:#d35400 3px solid}.rkmd-slider.slider-discrete.slider-carrot .slider-label{background-color:#d35400}.alizarin{background:#e74c3c;border-bottom:#c0392b 3px solid}.rkmd-slider.slider-discrete.slider-alizarin .slider-label{background-color:#c0392b}input{margin:0 auto 1.2rem auto;padding:2px 5px;width:100%;box-sizing:border-box;border:0;border-radius:4px;box-shadow:inset 0 0 6px rgba(0,0,0,0.3);background:rgba(255,255,255,0.8)}select{margin:0 auto 1.2rem auto;padding:2px 5px;width:100%;box-sizing:border-box;border:0;border-radius:4px;box-shadow:inset 0 0 6px rgba(0,0,0,0.3);background:rgba(255,255,255,0.8)}input[id^="num"]{max-width:6em;width:auto;text-align:right;font-weight:bold;font-size:115%}body div>ul.navigation{margin:0;padding:0;border-bottom:3px solid #666;overflow:hidden}ul.navigation li{list-style:none;float:left;margin-right:4px}ul.navigation li.controls{float:right}ul.navigation li a{font-weight:bold;display:inline-block;padding:6px 12px;color:#888;outline:0;text-decoration:none;background:#f3f3f3;background:-webkit-gradient(linear,0 0,0 bottom,from(#eee),to(#e4e4e4));background:-moz-linear-gradient(#eee,#e4e4e4);background:linear-gradient(#eee,#e4e4e4);-pie-background:linear-gradient(#eee,#e4e4e4)}ul.navigation li.active a{pointer-events:none;color:white;background:#666;background:-webkit-gradient(linear,0 0,0 bottom,from(#888),to(#666));background:-moz-linear-gradient(#888,#666);background:linear-gradient(#888,#666);-pie-background:linear-gradient(#888,#666)}div.tabscontent>div{padding:0 15px}#tabsnav:empty{display:none}.range-slider{margin:0}.range-slider{width:100%}.range-slider__range{-webkit-appearance:none;width:calc(100% - (45px));height:10px;border-radius:5px;outline:0;padding:0;margin:0}.range-slider__range::-webkit-slider-thumb{-webkit-appearance:none;appearance:none;width:20px;height:20px;border-radius:50%;cursor:pointer;transition:background .15s ease-in-out}.range-slider__range::-webkit-slider-thumb:hover{background:#1abc9c}.range-slider__range:active::-webkit-slider-thumb{background:#1abc9c}.range-slider__range::-moz-range-thumb{width:20px;height:20px;border:0;border-radius:50%;cursor:pointer;transition:background .15s ease-in-out}.range-slider__range:focus::-webkit-slider-thumb{box-shadow:0 0 0 3px #fff,0 0 0 6px #1abc9c}.range-slider__value{display:inline-block;position:relative;width:30px;color:#fff;line-height:20px;text-align:center;border-radius:3px;padding:5px 5px;margin-left:2px}.range-slider__value:after{position:absolute;top:8px;left:-7px;width:0;height:0;content:""}::-moz-range-track{border:0}input::-moz-focus-inner,input::-moz-focus-outer{border:0}svg{display:block;width:100%;height:100%}.y-axis path,.x-axis path{stroke:gray;stroke-width:1;fill:none}.series{stroke:steelblue;stroke-width:3;fill:none}.data-points circle{stroke:steelblue;stroke-width:2;fill:white}.data-points text{display:none}.data-points circle:hover{fill:steelblue;stroke-width:6}.data-points circle:hover+text{display:inline-block}text{text-anchor:end}
)=====";

const uint8_t CSS_STYLE_GZIP[3402] PROGMEM = { 31,139,8,0,212,110,180,92,2,255,213,27,219,110,171,72,242,87,216,68,145,98,13,176,220,109,131,102,180,143,251,182,210,206,227,106,118,212,134,38,160,96,240,66,251,36,25,139,127,223,190,1,125,35,118,46,163,213,30,159,147,131,155,170,234,186,117,85,117,117,199,205,187,22,129,186,133,253,229,212,13,53,170,187,54,237,97,3,80,253,3,102,47,117,129,170,116,187,127,200,142,160,127,170,219,52,240,78,175,217,161,123,117,134,250,143,186,125,74,15,93,95,192,222,193,35,163,155,119,205,249,216,218,252,255,225,194,144,125,207,123,200,202,166,3,40,109,96,137,48,24,232,139,11,35,231,160,238,148,6,15,25,167,210,131,162,62,15,105,50,77,81,129,162,123,73,61,43,58,189,210,127,253,211,1,60,6,94,100,251,251,173,237,239,98,219,115,227,77,118,2,69,129,89,113,8,117,198,223,52,210,215,79,21,31,226,243,29,58,132,186,35,230,137,12,225,239,140,197,216,35,223,49,219,93,159,222,151,101,57,254,237,8,139,26,60,30,193,43,135,72,66,12,177,185,112,222,103,196,253,238,97,100,2,57,67,83,23,68,133,124,106,97,162,209,69,231,254,63,231,174,30,224,229,0,242,231,167,190,59,183,69,122,239,131,67,190,207,179,89,131,20,225,222,79,128,183,139,173,16,139,59,116,152,230,232,194,35,236,65,83,72,184,1,204,243,173,175,226,6,91,0,19,79,196,61,65,4,251,30,91,178,151,208,195,104,191,43,14,26,250,126,231,29,246,34,250,11,68,96,56,85,160,65,10,122,180,143,161,134,158,135,48,150,102,31,206,45,54,252,139,50,121,233,231,145,87,170,216,48,57,28,188,82,196,198,106,237,59,121,98,152,108,97,16,168,168,69,24,71,158,52,49,104,234,63,64,95,183,50,242,54,202,67,77,223,185,23,238,131,131,136,92,128,254,89,66,140,162,104,23,111,85,68,54,42,34,54,224,0,155,139,113,113,100,47,85,141,160,51,156,64,14,211,182,123,233,193,73,113,122,55,128,199,201,113,83,215,199,223,44,55,34,63,124,252,51,67,240,21,57,88,170,167,54,205,97,139,109,42,120,107,86,226,5,236,188,64,234,236,91,207,203,26,188,152,157,138,125,247,21,207,143,177,163,23,245,112,106,192,91,90,183,20,242,208,116,249,179,137,65,236,53,168,206,65,195,39,62,128,1,18,132,76,15,19,100,25,59,174,31,99,78,23,197,57,156,197,253,126,111,88,126,92,93,14,153,137,71,138,61,14,20,34,27,167,30,210,215,217,11,214,20,125,74,15,61,4,207,14,249,206,241,93,58,9,150,225,44,46,174,105,234,164,220,131,194,151,65,123,88,24,32,139,112,155,111,115,25,242,169,135,176,53,192,238,15,121,144,236,100,216,174,7,237,147,137,133,2,2,63,142,100,224,55,216,224,101,97,0,134,251,34,137,20,126,79,231,254,212,152,40,239,203,93,136,133,155,98,213,28,148,34,143,199,170,57,174,179,241,93,132,131,149,6,61,71,54,5,154,132,54,45,162,115,51,242,184,58,3,164,101,221,15,200,201,171,186,41,102,96,113,112,66,164,33,218,27,221,174,133,51,237,229,121,202,24,145,155,204,127,182,120,18,244,210,169,57,37,116,195,249,15,129,168,176,169,20,152,128,240,87,118,231,94,25,15,61,87,162,94,98,7,86,65,246,50,249,161,126,85,89,36,218,25,224,15,216,42,47,226,68,166,78,87,161,2,147,196,50,249,182,214,84,176,141,136,84,26,245,93,160,80,111,12,44,236,125,69,57,47,176,209,68,164,89,89,183,138,131,170,186,47,56,236,138,194,176,57,24,216,32,195,169,98,17,114,56,117,148,50,20,213,92,87,150,3,68,206,225,205,145,60,193,48,58,72,174,179,83,60,99,193,88,124,196,54,142,202,116,252,173,194,234,130,33,120,146,189,50,46,211,10,18,137,128,224,113,182,121,88,70,15,35,119,69,36,193,49,109,243,176,76,41,10,215,132,90,252,215,54,142,202,116,226,64,70,22,92,204,94,25,151,9,36,222,154,72,226,106,176,87,198,21,90,251,53,161,132,85,99,155,135,101,74,91,217,241,144,81,40,180,34,210,46,89,21,169,89,209,143,178,54,69,106,251,120,77,40,117,9,218,239,188,187,213,143,180,245,106,191,247,242,86,245,43,171,219,94,127,165,123,215,88,161,99,115,161,101,11,174,148,96,154,4,110,252,48,30,186,226,141,131,166,94,182,188,245,93,82,87,200,69,141,88,242,224,124,199,190,151,224,88,55,111,233,221,63,78,176,181,126,5,237,112,103,15,248,39,246,212,190,46,167,130,41,32,245,163,158,120,243,210,43,253,177,242,237,42,176,171,208,174,34,187,138,237,42,17,247,41,158,82,197,184,113,143,249,18,57,9,61,15,147,16,4,139,122,149,115,55,200,26,136,112,1,71,107,28,82,235,225,186,9,67,141,85,32,224,133,110,98,192,140,215,80,67,17,85,71,12,215,240,34,1,47,112,13,204,134,134,41,189,29,197,141,47,162,133,118,58,174,9,53,166,168,137,132,26,235,168,137,138,234,173,214,45,146,186,99,77,145,145,27,232,26,162,202,149,165,15,53,153,130,21,86,199,241,36,57,197,8,46,220,135,124,8,96,113,24,65,90,117,100,191,197,71,189,18,120,57,28,15,103,236,51,237,197,88,122,79,85,191,207,246,214,226,174,32,148,246,165,230,226,122,188,63,226,194,237,239,16,144,253,167,105,130,241,30,23,119,191,34,128,206,195,178,197,175,219,10,47,11,36,172,51,119,139,215,25,103,212,118,57,195,74,225,78,20,224,158,157,242,220,52,204,14,98,57,177,210,22,56,59,100,31,45,160,44,219,234,247,209,78,4,133,214,154,23,214,63,160,207,243,27,18,78,46,98,99,1,177,173,209,69,219,44,141,85,47,218,140,185,156,34,25,117,148,73,251,140,59,111,250,74,144,252,105,159,103,221,67,159,124,198,165,100,78,65,137,103,177,221,190,123,153,30,207,78,94,94,8,0,102,32,189,187,155,247,92,8,28,26,152,229,13,4,61,150,22,85,140,74,223,53,166,173,67,81,136,22,175,143,224,9,166,196,172,128,236,77,176,131,96,218,143,213,208,128,71,207,246,30,232,95,215,223,216,203,8,81,47,29,219,40,110,21,79,106,103,29,150,186,197,145,219,242,44,34,227,244,79,163,18,111,108,79,128,209,222,111,5,128,192,4,16,8,0,225,53,128,232,26,64,34,1,76,28,100,60,134,236,103,3,167,33,222,68,131,51,234,178,181,238,214,158,248,52,183,130,117,110,46,83,24,34,190,57,45,77,47,67,120,131,55,148,93,127,76,251,14,47,37,248,24,197,5,124,218,44,152,77,125,145,149,76,8,88,132,93,79,215,181,67,68,112,110,209,181,65,70,99,16,225,92,19,203,146,240,67,250,46,105,85,23,5,108,179,169,201,245,32,138,137,249,77,91,84,177,253,217,99,176,185,104,2,238,61,89,64,21,39,52,224,56,215,144,34,3,146,191,211,145,192,100,134,128,154,65,239,56,104,51,51,123,112,97,9,214,66,143,135,100,91,24,40,187,28,71,67,109,205,153,92,78,160,115,209,151,17,95,171,184,60,154,237,194,12,66,2,43,94,226,77,97,249,240,248,215,208,18,74,17,189,155,67,71,10,152,119,61,160,114,182,184,134,98,131,115,19,116,213,89,162,13,211,6,211,144,235,199,195,194,49,121,192,251,240,227,119,69,151,216,16,94,176,138,54,223,30,77,130,255,121,52,217,225,149,198,42,86,108,101,177,62,9,167,200,226,176,202,116,118,78,112,192,9,226,140,88,59,140,96,241,253,179,24,95,38,131,168,30,57,143,175,56,230,61,132,112,116,135,151,26,229,149,49,201,91,127,169,143,167,174,71,160,69,134,50,225,0,201,71,201,2,145,220,103,159,236,230,81,109,208,94,59,214,6,249,184,225,70,172,66,242,115,63,224,231,83,87,83,223,213,221,158,215,75,132,254,180,138,19,189,7,31,144,78,253,74,76,78,72,41,132,203,234,195,115,141,28,193,187,85,201,44,55,24,44,8,6,232,96,194,221,25,101,206,177,251,227,99,8,221,7,233,15,31,130,255,0,236,100,94,55,175,96,254,108,236,82,110,147,34,240,139,9,208,170,219,211,25,253,11,189,157,224,207,119,20,9,91,243,238,183,217,61,104,16,81,140,53,39,55,172,95,214,10,145,204,32,185,240,14,191,153,234,52,210,176,173,219,203,58,224,66,204,96,54,242,210,194,59,135,247,109,181,2,213,221,66,105,184,14,116,13,64,213,191,85,212,63,46,108,111,189,35,226,115,165,99,53,164,7,136,83,143,124,154,35,151,231,41,149,77,141,166,88,87,54,1,180,60,252,159,71,62,22,137,69,27,9,145,107,111,70,98,68,108,202,50,33,64,31,216,26,178,89,135,120,192,195,143,30,165,188,17,135,104,156,227,19,109,140,147,124,138,193,238,115,104,216,68,159,193,211,113,38,225,205,152,52,194,137,213,58,53,140,20,247,2,245,124,209,91,78,23,165,136,55,87,239,211,170,217,173,174,21,39,158,214,128,179,159,151,13,137,122,146,223,208,205,129,236,54,148,249,27,61,135,9,202,44,253,189,158,195,124,196,224,60,216,165,62,224,57,87,24,236,62,135,182,234,57,239,227,189,231,57,38,76,165,120,167,59,111,205,3,130,57,143,165,180,124,39,206,67,30,12,110,193,67,103,64,124,160,127,62,206,71,196,114,190,212,51,160,144,65,73,214,148,90,91,255,236,176,8,157,216,215,146,104,75,25,129,158,72,225,116,160,110,7,86,57,93,210,53,121,236,72,239,5,189,145,131,129,43,51,252,228,222,40,153,176,233,159,234,130,173,214,242,240,73,207,99,173,130,153,250,64,60,157,165,37,182,241,230,114,51,131,124,214,72,155,212,27,111,150,210,226,255,59,101,221,52,107,34,43,170,245,50,113,83,121,30,72,107,11,54,48,71,44,71,255,129,51,80,1,95,83,255,227,76,84,160,45,26,120,81,178,188,57,70,81,231,101,135,61,147,41,98,193,230,241,82,162,177,64,182,211,212,68,138,90,33,141,130,166,153,139,152,117,169,130,175,25,77,21,149,69,91,23,115,123,221,102,41,54,15,105,184,20,179,7,24,28,203,35,31,161,124,254,56,85,201,37,236,207,163,203,198,44,96,9,206,13,186,82,216,127,51,247,243,23,122,4,253,101,89,100,114,114,101,250,231,11,227,214,131,3,114,18,122,190,44,200,66,74,112,192,91,87,209,183,137,241,205,214,89,35,172,216,201,28,2,104,243,133,0,140,95,101,35,229,138,21,106,50,66,87,116,252,101,198,33,7,13,124,244,55,107,94,50,145,198,115,230,61,68,179,100,234,34,211,179,147,57,10,223,72,79,81,224,74,145,232,111,221,185,78,140,102,255,33,39,25,147,255,132,218,198,151,72,237,116,125,77,74,14,172,124,90,173,100,235,111,116,107,105,212,22,29,42,189,179,235,16,134,189,157,148,4,86,198,175,103,128,207,169,153,173,176,192,164,50,46,2,233,52,93,19,211,0,51,126,221,7,172,225,4,214,54,204,91,45,17,123,75,43,113,190,210,181,212,128,122,195,80,151,87,106,75,175,181,171,151,170,110,166,160,229,109,186,1,49,140,14,250,160,58,240,39,217,153,169,82,208,73,160,38,255,27,201,42,81,220,147,35,117,48,175,72,161,115,21,41,225,251,195,51,41,46,203,226,192,178,91,12,244,2,56,38,77,209,249,135,183,110,107,238,172,22,125,209,144,145,0,23,207,182,19,96,188,77,246,49,240,239,20,146,217,107,114,181,247,227,233,244,125,190,35,171,232,75,175,18,216,13,217,155,136,242,171,179,87,73,178,139,179,95,190,46,123,3,71,203,12,215,153,162,244,191,124,9,247,6,166,150,25,174,51,69,233,127,245,106,239,13,60,205,19,92,101,137,145,255,210,125,225,27,248,97,212,175,50,195,104,127,241,6,242,13,236,76,244,175,50,196,168,143,180,44,155,111,215,208,3,81,139,157,121,243,195,81,126,208,73,206,90,132,202,118,245,124,126,106,180,121,95,57,83,16,116,195,174,246,199,177,61,253,243,220,221,102,100,169,229,255,142,109,86,3,215,197,191,127,190,107,207,199,187,223,132,27,15,9,60,114,38,41,255,66,98,167,151,27,164,235,68,228,240,80,172,4,124,126,73,138,52,166,127,57,55,110,11,126,212,79,244,188,112,185,54,181,28,88,203,94,22,46,13,209,36,73,212,35,226,81,162,70,142,178,155,122,192,211,162,183,6,178,76,191,220,179,200,164,75,192,36,61,170,200,211,161,214,32,93,219,80,161,44,112,209,132,125,247,122,12,49,5,109,97,112,207,222,237,118,89,119,70,4,146,156,207,155,78,80,165,216,20,146,207,45,13,83,210,24,244,166,94,97,217,119,199,71,114,250,182,177,81,135,31,34,242,81,122,162,166,142,45,65,177,39,240,247,218,146,50,160,115,170,177,220,55,66,235,154,231,217,24,92,120,5,230,144,59,136,104,224,71,65,84,111,244,134,189,164,25,226,16,159,83,11,54,1,83,11,38,113,139,78,48,188,77,97,223,85,200,2,117,85,27,51,232,136,215,132,139,112,145,205,123,182,191,144,195,155,121,49,208,74,106,188,39,239,177,190,82,120,60,161,55,105,147,139,99,46,217,171,78,45,218,105,57,41,195,75,116,145,95,252,254,59,187,253,63,105,14,156,78,152,77,208,230,124,241,48,60,188,215,200,105,91,221,114,44,92,142,227,154,107,35,29,199,41,59,55,210,130,157,189,123,89,214,102,214,56,7,233,108,188,169,170,170,206,199,195,42,95,102,62,3,97,59,26,120,198,30,160,210,110,52,30,114,90,228,38,130,124,190,118,51,199,252,10,157,254,219,82,102,26,204,235,87,132,191,149,8,115,89,246,134,97,190,171,14,45,133,124,179,94,232,61,128,53,145,228,195,43,86,202,144,125,163,237,205,73,107,69,214,31,128,252,166,140,57,206,174,244,235,67,249,151,227,164,187,16,84,33,250,238,84,191,196,56,57,112,204,19,181,116,131,158,110,177,116,54,249,113,217,149,51,103,103,59,231,253,185,205,238,9,71,55,163,108,217,30,27,226,50,153,144,101,106,14,64,53,142,109,210,194,222,214,199,177,161,136,71,78,136,195,143,39,165,247,175,31,110,176,64,241,230,128,215,122,176,78,0,85,182,251,186,124,185,12,56,71,62,195,20,7,179,183,140,61,79,183,34,51,210,245,227,113,137,28,242,192,97,2,30,16,132,13,249,101,39,25,35,20,49,10,128,128,67,93,112,176,242,186,207,27,120,5,59,96,216,52,49,200,232,196,178,74,156,212,169,243,197,74,105,172,204,144,172,227,253,36,205,33,93,91,165,111,152,115,181,121,133,221,15,182,197,248,95,172,216,174,129,175,58,0,0 };
