/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmojiFoundation/EMFEmojiPreferences.h>

@class NSXPCConnection, NSString;

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences {

	NSXPCConnection* _connection;
	BOOL _isValid;
	NSString* _machName;

}

@property (nonatomic,retain) NSString * machName;              //@synthesize machName=_machName - In the implementation block
@property (assign,nonatomic) BOOL isValid;                     //@synthesize isValid=_isValid - In the implementation block
+(id)serviceInterface;
-(void)dealloc;
-(BOOL)isValid;
-(void)_disconnect;
-(void)createConnectionIfNecessary;
-(NSString *)machName;
-(void)setMachName:(NSString *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(void)didUseEmoji:(id)arg1 ;
-(void)writeEmojiDefaults;
-(void)didUseEmoji:(id)arg1 usageMode:(id)arg2 ;
-(void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3 ;
-(void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2 ;
-(void)didDisplaySkinToneHelp;
-(id)initWithMachName:(id)arg1 ;
-(id)_initWithoutConnection;
@end
