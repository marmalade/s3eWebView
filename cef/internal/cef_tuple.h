// Copyright (c) 2006-2011 Google Inc. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// The contents of this file are identical to base/tuple.h

// A Tuple is a generic templatized container, similar in concept to std::pair.
// There are classes Tuple0 to Tuple6, cooresponding to the number of elements
// it contains.  The convenient MakeTuple() function takes 0 to 6 arguments,
// and will construct and return the appropriate Tuple object.  The functions
// DispatchToMethod and DispatchToFunction take a function pointer or instance
// and method pointer, and unpack a tuple into arguments to the call.
//
// Tuple elements are copied by value, and stored in the tuple.  See the unit
// tests for more details of how/when the values are copied.
//
// Example usage:
//   // These two methods of creating a Tuple are identical.
//   Tuple2<int, const char*> tuple_a(1, "wee");
//   Tuple2<int, const char*> tuple_b = MakeTuple(1, "wee");
//
//   void SomeFunc(int a, const char* b) { }
//   DispatchToFunction(&SomeFunc, tuple_a);  // SomeFunc(1, "wee")
//   DispatchToFunction(
//       &SomeFunc, MakeTuple(10, "foo"));    // SomeFunc(10, "foo")
//
//   struct { void SomeMeth(int a, int b, int c) { } } foo;
//   DispatchToMethod(&foo, &Foo::SomeMeth, MakeTuple(1, 2, 3));
//   // foo->SomeMeth(1, 2, 3);

#ifndef BASE_TUPLE_H__
#define BASE_TUPLE_H__

#endif  // BASE_TUPLE_H__
