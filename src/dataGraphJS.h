const char JS_GRAPH[] PROGMEM = R"=====(
function lineGraph(parent,xAccessor,yAccessor){const width=620;const height=420;const gutter=40;const pixelsPerTick=30;function numericTransformer(dataMin,dataMax,pxMin,pxMax){var dataDiff=dataMax-dataMin,pxDiff=pxMax-pxMin,dataRatio=pxDiff/dataDiff,coordRatio=dataDiff/pxDiff;return{toCoord:function(data){return(data-dataMin)*dataRatio+pxMin;},toData:function(coord){return(coord-pxMin)*coordRatio+dataMin;}};}
function axisRenderer(orientation,transform){var axisGroup=document.createElementNS("http://www.w3.org/2000/svg","g");var axisPath=document.createElementNS("http://www.w3.org/2000/svg","path");axisGroup.setAttribute("class",orientation+"-axis");var xMin=gutter;var xMax=width-gutter;var yMin=height-gutter;var yMax=gutter;if(orientation==="x"){axisPath.setAttribute("d","M "+xMin+" "+yMin+" L "+xMax+" "+yMin);for(var i=xMin;i<=xMax;i++){if((i-xMin)%pixelsPerTick===0&&i!==xMin){var text=document.createElementNS("http://www.w3.org/2000/svg","text");text.innerHTML=Math.floor(transform(i));text.setAttribute("x",i);text.setAttribute("y",yMin);text.setAttribute("dy","1em");axisGroup.appendChild(text);}}}else{axisPath.setAttribute("d","M "+xMin+" "+yMin+" L "+xMin+" "+yMax);for(var i=yMax;i<=yMin;i++){if((i-yMin)%pixelsPerTick===0&&i!==yMin){var tickGroup=document.createElementNS("http://www.w3.org/2000/svg","g");var gridLine=document.createElementNS("http://www.w3.org/2000/svg","path");text=document.createElementNS("http://www.w3.org/2000/svg","text");text.innerHTML=Math.floor(transform(i));text.setAttribute("x",xMin);text.setAttribute("y",i);text.setAttribute("dx","-.5em");text.setAttribute("dy",".3em");gridLine.setAttribute("d","M "+xMin+" "+i+" L "+xMax+" "+i);tickGroup.appendChild(gridLine);tickGroup.appendChild(text);axisGroup.appendChild(tickGroup);}}}
axisGroup.appendChild(axisPath);parent.appendChild(axisGroup);}
function lineRenderer(xAccessor,yAccessor,xTransform,yTransform){var line=document.createElementNS("http://www.w3.org/2000/svg","path");xAccessor.reset();yAccessor.reset();if(!xAccessor.hasNext()||!yAccessor.hasNext()){return;}
var pathString="M "+xTransform(xAccessor.next())+" "+yTransform(yAccessor.next());while(xAccessor.hasNext()&&yAccessor.hasNext()){pathString+=" L "+
xTransform(xAccessor.next())+
" "+
yTransform(yAccessor.next());}
line.setAttribute("class","series");line.setAttribute("d",pathString);parent.appendChild(line);}
function pointRenderer(xAccessor,yAccessor,xTransform,yTransform){var pointGroup=document.createElementNS("http://www.w3.org/2000/svg","g");pointGroup.setAttribute("class","data-points");xAccessor.reset();yAccessor.reset();if(!xAccessor.hasNext()||!yAccessor.hasNext()){return;}
while(xAccessor.hasNext()&&yAccessor.hasNext()){var xDataValue=xAccessor.next();var x=xTransform(xDataValue);var yDataValue=yAccessor.next();var y=yTransform(yDataValue);var circle=document.createElementNS("http://www.w3.org/2000/svg","circle");circle.setAttribute("cx",x);circle.setAttribute("cy",y);circle.setAttribute("r","4");var text=document.createElementNS("http://www.w3.org/2000/svg","text");text.innerHTML=Math.floor(xDataValue)+" / "+Math.floor(yDataValue);text.setAttribute("x",x);text.setAttribute("y",y);text.setAttribute("dx","1em");text.setAttribute("dy","-.7em");pointGroup.appendChild(circle);pointGroup.appendChild(text);}
parent.appendChild(pointGroup);}
xTransform=numericTransformer(xAccessor.min(),xAccessor.max(),0+gutter,width-gutter);yTransform=numericTransformer(yAccessor.min(),yAccessor.max(),height-gutter,0+gutter);axisRenderer("x",xTransform.toData);axisRenderer("y",yTransform.toData);lineRenderer(xAccessor,yAccessor,xTransform.toCoord,yTransform.toCoord);pointRenderer(xAccessor,yAccessor,xTransform.toCoord,yTransform.toCoord);}
function renderGraphSvg(dataArray,renderId){var figure=document.getElementById(renderId);while(figure.hasChildNodes()){figure.removeChild(figure.lastChild);}
console.log(dataArray);var svg=document.createElementNS("http://www.w3.org/2000/svg","svg");svg.setAttribute("viewBox","0 0 640 440");svg.setAttribute("preserveAspectRatio","xMidYMid meet");lineGraph(svg,(function(data,min,max){var i=0;return{hasNext:function(){return i<data.length;},next:function(){return data[i++].x;},reset:function(){i=0;},min:function(){return min;},max:function(){return max;}};})(dataArray,Math.min.apply(Math,dataArray.map(function(o){return o.x;})),Math.max.apply(Math,dataArray.map(function(o){return o.x;}))),(function(data,min,max){var i=0;return{hasNext:function(){return i<data.length;},next:function(){return data[i++].y;},reset:function(){i=0;},min:function(){return min;},max:function(){return max;}};})(dataArray,Math.min.apply(Math,dataArray.map(function(o){return o.y;})),Math.max.apply(Math,dataArray.map(function(o){return o.y;}))));figure.appendChild(svg);}
)=====";

const uint8_t JS_GRAPH_GZIP[1254] PROGMEM = { 31,139,8,0,212,110,180,92,2,255,205,87,221,111,219,54,16,127,247,95,225,8,88,32,213,178,172,54,94,7,84,225,67,218,14,93,129,36,40,154,96,192,48,236,129,147,104,153,152,44,9,20,109,139,112,253,191,239,142,212,151,109,41,67,157,22,221,67,28,241,190,121,252,221,29,185,88,167,161,228,89,58,78,120,202,62,8,154,47,237,156,10,150,74,183,188,9,67,86,20,153,112,85,253,229,236,194,44,45,228,120,203,35,185,36,175,95,249,129,89,47,25,143,151,146,204,27,66,188,150,146,9,50,175,215,57,47,89,82,124,98,226,145,135,255,144,43,63,88,212,110,211,245,138,9,30,62,10,154,22,139,76,192,194,142,168,164,119,60,117,245,127,90,186,121,137,43,248,165,165,179,219,80,49,70,198,123,190,88,144,74,98,90,107,228,165,38,107,209,169,81,67,214,103,10,174,136,97,206,106,101,55,204,50,17,25,86,77,155,25,153,64,48,185,22,233,78,102,239,80,230,77,29,172,142,204,217,25,174,94,212,158,157,23,141,159,137,246,27,236,93,153,189,7,90,171,172,253,53,218,122,101,98,116,94,180,161,76,42,131,193,126,31,236,71,77,150,104,201,139,207,44,141,152,128,252,100,130,195,249,160,116,234,202,58,111,38,51,40,247,65,100,235,156,68,89,8,153,77,165,23,10,70,37,251,53,97,184,186,127,176,173,165,148,249,155,217,108,187,221,122,219,43,47,19,241,236,149,239,251,179,98,19,91,174,21,91,78,80,27,250,68,225,144,207,180,147,131,46,152,106,226,241,10,38,111,164,20,252,239,181,100,182,21,38,180,40,44,183,179,147,137,53,69,225,202,61,166,133,24,16,85,107,90,18,141,186,105,135,170,80,202,96,239,144,12,194,213,154,47,186,233,34,132,88,165,229,236,234,221,29,69,21,65,224,119,99,107,130,222,39,22,124,40,243,113,171,105,180,108,104,78,0,41,183,209,23,39,250,180,249,53,65,129,128,79,38,206,14,124,218,124,170,79,246,167,67,224,19,226,95,94,242,11,162,149,204,137,73,86,202,115,147,140,186,144,48,252,231,241,52,101,226,183,199,187,91,114,135,27,91,36,0,41,187,65,135,205,157,74,238,112,199,165,229,242,94,134,178,92,179,209,30,94,4,76,235,37,91,29,156,47,205,115,192,231,187,37,79,34,27,117,28,64,240,30,182,206,206,75,118,67,131,154,239,36,91,233,36,95,19,165,147,222,38,91,61,149,108,213,38,27,232,223,164,60,98,193,163,91,104,152,207,44,143,31,126,248,229,208,25,171,33,96,68,160,101,77,189,159,245,241,15,129,195,187,210,236,58,75,255,117,242,252,184,198,208,117,125,84,7,200,170,45,14,241,13,242,6,80,89,107,104,104,142,250,133,106,176,58,129,153,130,39,204,218,66,219,155,113,112,54,189,185,103,104,186,101,51,220,92,245,120,216,175,147,231,99,168,241,232,9,6,121,182,157,64,157,80,160,72,46,90,185,37,45,238,33,79,182,243,229,203,133,58,165,214,35,10,246,136,33,162,155,7,56,187,52,38,230,212,154,45,180,155,245,82,163,105,106,182,21,80,199,2,193,22,18,201,236,158,88,46,47,123,67,105,189,79,136,1,201,232,201,0,70,24,193,232,201,16,246,163,228,20,147,213,64,178,10,184,140,48,156,66,73,47,110,219,112,122,1,146,104,104,118,176,145,103,60,149,231,130,67,43,63,187,93,181,86,6,182,172,239,49,90,170,248,206,112,250,218,195,215,147,31,47,81,191,211,100,205,200,241,105,155,155,1,233,226,161,17,54,76,213,42,171,62,101,69,186,72,57,82,14,185,8,147,179,171,211,104,67,66,205,199,113,238,177,247,14,241,112,246,14,240,4,88,158,87,51,232,187,14,143,78,38,161,168,103,80,84,29,102,55,83,3,115,101,240,82,49,60,84,94,62,57,82,166,222,47,154,223,129,115,183,242,76,182,6,217,213,141,100,212,83,179,173,6,10,180,96,34,61,47,147,22,129,43,158,218,142,219,89,211,18,214,254,196,92,59,221,238,85,21,42,232,73,163,234,200,168,58,50,122,112,193,109,92,152,41,215,180,22,157,244,198,170,103,222,30,199,50,152,255,83,153,175,152,95,94,245,34,58,52,163,73,85,234,191,133,161,78,255,20,218,156,126,150,62,108,98,253,228,186,17,130,42,215,48,62,70,166,73,44,120,188,22,157,82,141,153,172,42,225,173,250,24,217,141,112,53,126,140,56,118,26,13,129,251,44,98,5,246,155,138,46,216,42,219,48,131,142,138,4,173,82,106,2,70,135,79,218,12,74,51,201,58,17,153,154,132,234,58,183,36,241,215,9,224,247,8,253,27,206,182,111,51,44,16,127,236,143,95,207,253,241,124,238,247,74,230,216,159,197,134,221,20,57,11,165,126,78,130,22,220,178,162,63,224,111,188,98,76,86,131,205,188,243,193,130,107,31,188,109,93,64,160,187,170,159,217,156,248,245,75,184,106,202,237,99,182,238,234,99,126,141,138,94,194,210,88,46,225,213,155,246,139,161,208,159,112,97,255,203,43,65,72,15,146,174,20,186,218,163,247,30,213,149,126,77,67,84,125,60,120,14,224,75,217,233,64,67,55,42,80,194,42,79,148,141,75,183,225,66,77,229,237,158,179,198,80,134,113,57,78,165,76,203,115,148,157,31,144,77,245,63,205,166,122,78,54,181,50,220,212,170,226,235,118,107,192,44,148,224,191,224,198,10,203,181,18,0,0 };
