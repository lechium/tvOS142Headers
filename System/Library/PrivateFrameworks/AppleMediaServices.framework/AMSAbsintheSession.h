/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSString;

@interface AMSAbsintheSession : NSObject {

	PSCSessionInternal_Ref _sessionRef;
	NSString* _servKey;

}

@property (assign,nonatomic) PSCSessionInternal_Ref sessionRef;              //@synthesize sessionRef=_sessionRef - In the implementation block
@property (nonatomic,retain) NSString * servKey;                             //@synthesize servKey=_servKey - In the implementation block
+(id)defaultSession;
-(id)init;
-(BOOL)clearSession;
-(PSCSessionInternal_Ref)sessionRef;
-(void)setSessionRef:(PSCSessionInternal_Ref)arg1 ;
-(id)signData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
-(NSString *)servKey;
-(void)setServKey:(NSString *)arg1 ;
-(BOOL)_prepareContextWithBag:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
@end

