/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class NSString, SKSoundSource;

@interface SKPlaySound : SKAction {

	NSString* _filePath;
	NSString* _fileName;
	SKCPlaySound* _mycaction;
	CGPoint _position;
	SKSoundSource* _soundSource;

}
+(BOOL)supportsSecureCoding;
+(id)playSoundFileNamed:(id)arg1 atPosition:(CGPoint)arg2 waitForCompletion:(BOOL)arg3 ;
+(id)_audioURLWithName:(id)arg1 bundle:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

