/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SKNode;

@interface SKConstraint : NSObject <NSSecureCoding, NSCopying> {

	BOOL _enabled;
	SKNode* _referenceNode;

}

@property (assign) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) SKNode * referenceNode;              //@synthesize referenceNode=_referenceNode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)positionX:(id)arg1 ;
+(id)positionY:(id)arg1 ;
+(id)positionX:(id)arg1 Y:(id)arg2 ;
+(id)distance:(id)arg1 toNode:(id)arg2 ;
+(id)distance:(id)arg1 toPoint:(CGPoint)arg2 ;
+(id)distance:(id)arg1 toPoint:(CGPoint)arg2 inNode:(id)arg3 ;
+(id)zRotation:(id)arg1 ;
+(id)orientToPoint:(CGPoint)arg1 inNode:(id)arg2 offset:(id)arg3 ;
+(id)orientToNode:(id)arg1 offset:(id)arg2 ;
+(id)orientToPoint:(CGPoint)arg1 offset:(id)arg2 ;
+(id)width:(id)arg1 ;
+(id)height:(id)arg1 ;
+(id)width:(id)arg1 height:(id)arg2 ;
+(id)scale:(id)arg1 ;
+(id)scaleX:(id)arg1 ;
+(id)scaleY:(id)arg1 ;
+(id)scaleX:(id)arg1 scaleY:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(SKNode *)referenceNode;
-(void)setReferenceNode:(SKNode *)arg1 ;
-(BOOL)isEqualToConstraint:(id)arg1 ;
@end

