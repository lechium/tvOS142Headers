/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GCColor : NSObject <NSCopying, NSSecureCoding> {

	float _red;
	float _green;
	float _blue;

}

@property (readonly) float red;                //@synthesize red=_red - In the implementation block
@property (readonly) float green;              //@synthesize green=_green - In the implementation block
@property (readonly) float blue;               //@synthesize blue=_blue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)red;
-(float)green;
-(float)blue;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
@end
