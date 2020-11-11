/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GCExtendedGamepad.h>

@class GCControllerButtonInput;

@interface GCXboxGamepad : GCExtendedGamepad {

	GCControllerButtonInput* _paddleButton1;
	GCControllerButtonInput* _paddleButton2;
	GCControllerButtonInput* _paddleButton3;
	GCControllerButtonInput* _paddleButton4;
	long long _type;
	GCControllerButtonInput* _buttonShare;

}

@property (assign,nonatomic) long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * buttonShare;                  //@synthesize buttonShare=_buttonShare - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * paddleButton1;              //@synthesize paddleButton1=_paddleButton1 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * paddleButton2;              //@synthesize paddleButton2=_paddleButton2 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * paddleButton3;              //@synthesize paddleButton3=_paddleButton3 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * paddleButton4;              //@synthesize paddleButton4=_paddleButton4 - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)initializeExtraControllerElements;
-(GCControllerButtonInput *)paddleButton1;
-(GCControllerButtonInput *)paddleButton2;
-(GCControllerButtonInput *)paddleButton3;
-(GCControllerButtonInput *)paddleButton4;
-(GCControllerButtonInput *)buttonShare;
-(void)setButtonShare:(GCControllerButtonInput *)arg1 ;
@end
