/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, IMBalloonPluginDataSource;


@protocol IMPluginChatItemProtocol <NSObject>
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,retain,readonly) IMBalloonPluginDataSource * dataSource; 
@property (nonatomic,readonly) BOOL isFromMe; 
@required
-(NSString *)type;
-(IMBalloonPluginDataSource *)dataSource;
-(BOOL)isFromMe;

@end

