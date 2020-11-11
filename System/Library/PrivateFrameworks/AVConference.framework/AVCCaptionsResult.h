/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray, NSString;

@interface AVCCaptionsResult : NSObject {

	BOOL _utteranceComplete;
	NSMutableArray* _tokens;
	unsigned _utteranceNumber;
	unsigned _updateNumber;

}

@property (nonatomic,readonly) BOOL utteranceComplete;                //@synthesize utteranceComplete=_utteranceComplete - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                      //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) unsigned utteranceNumber;              //@synthesize utteranceNumber=_utteranceNumber - In the implementation block
@property (nonatomic,readonly) unsigned updateNumber;                 //@synthesize updateNumber=_updateNumber - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)text;
-(NSArray *)tokens;
-(unsigned)utteranceNumber;
-(unsigned)updateNumber;
-(id)initWithCapacity:(long long)arg1 utteranceComplete:(BOOL)arg2 utteranceNumber:(unsigned)arg3 updateNumber:(unsigned)arg4 ;
-(BOOL)addTokenWithString:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3 ;
-(BOOL)utteranceComplete;
@end

