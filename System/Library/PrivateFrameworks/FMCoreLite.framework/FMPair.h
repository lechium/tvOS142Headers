/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FMPair : NSObject {

	id _first;
	id _second;

}

@property (readonly) id first;               //@synthesize first=_first - In the implementation block
@property (readonly) id second;              //@synthesize second=_second - In the implementation block
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(id)second;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(id)first;
@end
