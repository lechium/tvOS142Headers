/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, GCPhysicalInputProfile;


@protocol GCDevice <NSObject>
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue; 
@property (nonatomic,copy,readonly) NSString * vendorName; 
@property (nonatomic,readonly) NSString * productCategory; 
@property (nonatomic,readonly) GCPhysicalInputProfile * physicalInputProfile; 
@required
-(void)setHandlerQueue:(id)arg1;
-(NSString *)vendorName;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(NSString *)productCategory;
-(GCPhysicalInputProfile *)physicalInputProfile;

@end

