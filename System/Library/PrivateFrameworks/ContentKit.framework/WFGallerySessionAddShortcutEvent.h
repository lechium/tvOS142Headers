/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFGallerySessionAddShortcutEvent : WFEvent {

	NSString* _key;
	NSString* _sessionIdentifier;
	NSString* _shortcutIdentifier;

}

@property (nonatomic,copy) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * shortcutIdentifier;              //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)shortcutIdentifier;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
@end

