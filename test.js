new_buf = new Buffer(12);
var buf = new Buffer("HackerEarth","utf-8");
for( var i=0;i<12; i++){
    new_buf[i] = buf[i];
}
console.log(new_buf[i]);
console.log(buf);