/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionLongPressExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionLongPress : OKAction <OKActionLongPressExports, NSSecureCoding> {

	unsigned long long _tapCount;
	double _pressDuration;

}

@property (assign,nonatomic) unsigned long long tapCount;              //@synthesize tapCount=_tapCount - In the implementation block
@property (assign,nonatomic) double pressDuration;                     //@synthesize pressDuration=_pressDuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)longPressActionWithLocation:(CGPoint)arg1 tapCount:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 pressDuration:(double)arg4 context:(id)arg5 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)tapCount;
-(void)setTapCount:(unsigned long long)arg1 ;
-(void)setPressDuration:(double)arg1 ;
-(double)pressDuration;
@end

