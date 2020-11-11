/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol OSLogEntryWithPayload
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSArray * components; 
@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,readonly) NSString * subsystem; 
@required
-(NSString *)category;
-(NSArray *)components;
-(NSString *)subsystem;
-(NSString *)formatString;

@end
