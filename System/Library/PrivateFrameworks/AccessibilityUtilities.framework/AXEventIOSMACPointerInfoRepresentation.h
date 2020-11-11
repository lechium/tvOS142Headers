/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXEventIOSMACPointerInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _pressed;
	long long _buttonIndex;
	CGPoint _location;

}

@property (assign,nonatomic) BOOL pressed;                       //@synthesize pressed=_pressed - In the implementation block
@property (assign,nonatomic) long long buttonIndex;              //@synthesize buttonIndex=_buttonIndex - In the implementation block
@property (assign,nonatomic) CGPoint location;                   //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(BOOL)pressed;
-(long long)buttonIndex;
-(void)setPressed:(BOOL)arg1 ;
-(void)setButtonIndex:(long long)arg1 ;
@end

