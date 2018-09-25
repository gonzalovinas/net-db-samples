
var net = require('net');

var server = net.createServer(function(sock) {

  sock.on('data', function(data) {
    //  console.log(data);
      try {
        parseInt(data);
      sock.write('Echo server\r\n');
      }
      catch(e) {
        sock.write('internal error');
      }

    });

    sock.on('error', function(exception) {
      console.log('SOCKET ERROR');
      sock.destroy();
    })

    sock.on('close', function(exception) {
      console.log('SOCKET CLOSED');
    })

//	sock.write('Echo server\r\n');
	sock.pipe(sock);
  sock.setEncoding("utf8");


});

server.listen(8888, '127.0.0.1');
