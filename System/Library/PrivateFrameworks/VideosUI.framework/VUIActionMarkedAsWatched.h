/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionMarkedAsWatched : VUIAction {

	NSString* _itemID;
	NSString* _itemType;
	NSString* _channelID;

}

@property (nonatomic,retain) NSString * itemID;                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * itemType;               //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) NSString * channelID;              //@synthesize channelID=_channelID - In the implementation block
-(id)initWithContextData:(id)arg1 ;
-(NSString *)itemID;
-(void)setItemType:(NSString *)arg1 ;
-(NSString *)itemType;
-(NSString *)channelID;
-(void)setItemID:(NSString *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setChannelID:(NSString *)arg1 ;
@end

