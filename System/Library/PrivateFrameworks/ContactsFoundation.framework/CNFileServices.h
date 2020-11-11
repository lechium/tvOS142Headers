/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNFileServices.h>

@protocol CNFileServices <NSObject>
@required
-(int)statfs:(const char*)arg1 :(statfs*)arg2;
-(int)errnoValue;
-(void*)dlopen:(const char*)arg1 :(int)arg2;
-(void*)dlsym:(void*)arg1 :(const char*)arg2;
-(int)dlclose:(void*)arg1;
-(int)open:(const char*)arg1 :(int)arg2 :(unsigned short)arg3;
-(int)close:(int)arg1;
-(int)fstatfs:(int)arg1 :(statfs*)arg2;
-(int)flock:(int)arg1 :(int)arg2;
-(int)fcntl_flock:(int)arg1 :(int)arg2 :(flock*)arg3;
-(id)NSTemporaryDirectory;

@end


@class NSString;

@interface CNFileServices : NSObject <CNFileServices>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(int)statfs:(const char*)arg1 :(statfs*)arg2 ;
-(int)errnoValue;
-(void*)dlopen:(const char*)arg1 :(int)arg2 ;
-(void*)dlsym:(void*)arg1 :(const char*)arg2 ;
-(int)dlclose:(void*)arg1 ;
-(int)open:(const char*)arg1 :(int)arg2 :(unsigned short)arg3 ;
-(int)close:(int)arg1 ;
-(int)fstatfs:(int)arg1 :(statfs*)arg2 ;
-(int)flock:(int)arg1 :(int)arg2 ;
-(int)fcntl_flock:(int)arg1 :(int)arg2 :(flock*)arg3 ;
-(id)NSTemporaryDirectory;
@end
