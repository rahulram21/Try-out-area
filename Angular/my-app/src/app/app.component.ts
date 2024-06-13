import { Component } from '@angular/core';
import { ApiService } from './api.service';
import { Observable } from 'rxjs';
import { NgFor } from '@angular/common';
import { NgClass } from '@angular/common';
import { NgStyle } from '@angular/common';
import { NgIf } from '@angular/common';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrl: './app.component.scss'
})
export class AppComponent {
  title = 'my-app';
  userObservable$: Observable<any[]> = new Observable<any[]>

  constructor(private service:ApiService){}

  setColor = false;
  setColor2 = false;
  currentColorStyle : Record<string, string> = {};
  isColorChanged : boolean = false;

  changeColor(){
    if(this.isColorChanged){
      this.currentColorStyle = {
        'font-style' : 'normal',
        'color' : 'initial'
      };
      this.setColor2 = false;
    }else{
      this.currentColorStyle = {
        'font-style' : 'italic',
        'color' : '#b8860b'
      };
      this.setColor2 = true;
    }
    this.isColorChanged = !this.isColorChanged;
  }

  getUsers(){
    this.userObservable$ = this.service.getUser();
  }
}
