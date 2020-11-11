/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface ASDPromiseResult : NSObject {

	NSError* _error;
	id _value;

}

@property (readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (readonly) id value;                     //@synthesize value=_value - In the implementation block
+(id)resultWithError:(id)arg1 ;
+(id)resultWithValue:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(id)value;
-(id)_initWithValue:(id)arg1 error:(id)arg2 ;
@end

