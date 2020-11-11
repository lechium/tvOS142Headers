/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionTapExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionTap : OKAction <OKActionTapExports, NSSecureCoding> {

	unsigned long long _tapCount;

}

@property (assign,nonatomic) unsigned long long tapCount;              //@synthesize tapCount=_tapCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)tapActionWithLocation:(CGPoint)arg1 tapCount:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)tapCount;
-(void)setTapCount:(unsigned long long)arg1 ;
@end
