function hh(){
    var z='';
    for(var i=1;i<10;i++){
        for(var k=1;k<=i;k++){
	    z+=k+'*'+i+'='+i*k+' ';
	}
	    z+='\n';
    }   
	console.log(z);
}

hh();
