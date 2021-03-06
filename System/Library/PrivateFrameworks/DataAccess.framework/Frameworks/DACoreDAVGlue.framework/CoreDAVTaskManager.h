/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSRunLoop;


@protocol CoreDAVTaskManager <NSObject>
@property (nonatomic,retain) NSRunLoop * workRunLoop; 
@required
-(void)shutdown;
-(void)submitQueuedCoreDAVTask:(id)arg1;
-(void)submitIndependentCoreDAVTask:(id)arg1;
-(NSRunLoop *)workRunLoop;
-(void)coreDAVTaskDidFinish:(id)arg1;
-(void)coreDAVTaskEndModal:(id)arg1;
-(void)coreDAVTaskRequestModal:(id)arg1;
-(void)setWorkRunLoop:(id)arg1;

@end

