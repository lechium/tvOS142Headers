/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class VOSGesture, _VOSProfileCommand;

@interface _VOSProfileGesture : NSObject <NSSecureCoding> {

	VOSGesture* _gesture;
	_VOSProfileCommand* _command;

}

@property (nonatomic,retain) VOSGesture * gesture;                             //@synthesize gesture=_gesture - In the implementation block
@property (assign,nonatomic,__weak) _VOSProfileCommand * command;              //@synthesize command=_command - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)profileGestureWithGesture:(id)arg1 ;
+(id)profileGestureWithStringValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCommand:(_VOSProfileCommand *)arg1 ;
-(_VOSProfileCommand *)command;
-(void)setGesture:(VOSGesture *)arg1 ;
-(VOSGesture *)gesture;
-(id)_initWithGesture:(id)arg1 ;
@end

