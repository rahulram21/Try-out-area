import { HttpClient } from '@angular/common/http';
import { Injectable } from '@angular/core';
import { Observable } from 'rxjs';

@Injectable({
  providedIn: 'root'
})
export class ApiService {

  constructor(private http:HttpClient) { }
  url = "https://api.restful-api.dev/objects";

  getUser():Observable<any>{
    return this.http.get<any>(this.url);
  }
}
