const express = require('express');
const mongoose = require('mongoose');
const bodyParser = require('body-parser');

const app = express();

const Message = mongoose.model('message', mongoose.Schema({
    username:{
        type: String,
        required: true
    },
    message: {
        type: String,
        required: true
    }
}));

WebSocket.OPEN('join_room', data => {
    WebSocket.to(room).emit('chatroom_users', {
        allusers
    })
})