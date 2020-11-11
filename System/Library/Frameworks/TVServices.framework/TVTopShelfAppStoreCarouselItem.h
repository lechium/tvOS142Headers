/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVServices/TVTopShelfCarouselItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TVTopShelfInstallApplicationAction;

@interface TVTopShelfAppStoreCarouselItem : TVTopShelfCarouselItem <NSSecureCoding> {

	BOOL _gameControllerRequired;
	BOOL _appleArcadeGame;
	TVTopShelfInstallApplicationAction* _installApplicationAction;

}

@property (assign,getter=isGameControllerRequired,nonatomic) BOOL gameControllerRequired;                //@synthesize gameControllerRequired=_gameControllerRequired - In the implementation block
@property (assign,getter=isAppleArcadeGame,nonatomic) BOOL appleArcadeGame;                              //@synthesize appleArcadeGame=_appleArcadeGame - In the implementation block
@property (nonatomic,retain) TVTopShelfInstallApplicationAction * installApplicationAction;              //@synthesize installApplicationAction=_installApplicationAction - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(TVTopShelfInstallApplicationAction *)installApplicationAction;
-(BOOL)isGameControllerRequired;
-(BOOL)isAppleArcadeGame;
-(void)setGameControllerRequired:(BOOL)arg1 ;
-(void)setAppleArcadeGame:(BOOL)arg1 ;
-(void)setInstallApplicationAction:(TVTopShelfInstallApplicationAction *)arg1 ;
@end
