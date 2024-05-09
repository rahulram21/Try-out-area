import { Component } from '@angular/core';
import { ApiService } from './api.service';
import { Observable } from 'rxjs';
import { NgFor } from '@angular/common';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrl: './app.component.scss'
})
export class AppComponent {
  title = 'my-app';
  userObservable$: Observable<any[]> = new Observable<any[]>

  constructor(private service:ApiService){}

  getUsers(){
    this.userObservable$ = this.service.getUser();
  }
}
