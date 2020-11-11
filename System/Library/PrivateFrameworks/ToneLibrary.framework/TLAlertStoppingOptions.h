/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ToneLibrary/ToneLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TLAlertStoppingOptions : NSObject <NSCopying> {

	BOOL _shouldWaitUntilEndOfCurrentRepetition;
	double _fadeOutDuration;

}

@property (assign,nonatomic) double fadeOutDuration;                                  //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) BOOL shouldWaitUntilEndOfCurrentRepetition;              //@synthesize shouldWaitUntilEndOfCurrentRepetition=_shouldWaitUntilEndOfCurrentRepetition - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(double)fadeOutDuration;
-(void)setFadeOutDuration:(double)arg1 ;
-(BOOL)shouldWaitUntilEndOfCurrentRepetition;
-(void)setShouldWaitUntilEndOfCurrentRepetition:(BOOL)arg1 ;
@end

