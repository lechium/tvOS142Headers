/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CFScriptDownloadDelegate <NSObject>
@required
-(id)cachePath;
-(void)downloadedScript:(id)arg1;
-(void)scriptSavedToFilePath:(id)arg1 forScript:(id)arg2;
-(void)scriptDownloadFailedForScript:(id)arg1 error:(id)arg2;

@end
