/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DESRecipeEvaluation <NSObject>
@optional
-(id)evaluateRecipe:(id)arg1 recordInfo:(id)arg2 recordData:(id)arg3 attachments:(id)arg4 error:(id*)arg5;
-(id)telemetryWithRecordSet:(id)arg1;
-(BOOL)shouldDownloadAttachmentWithURL:(id)arg1 recipe:(id)arg2 recordInfo:(id)arg3;
-(id)serverSafeRecordInfoWithRecordInfo:(id)arg1;
-(id)evaluateRecipe:(id)arg1 matchingRecordSet:(id)arg2 error:(id*)arg3;
-(id)evaluateRecipe:(id)arg1 matchingRecordSet:(id)arg2 binaryResult:(id*)arg3 error:(id*)arg4;
-(void)performEvaluation:(id)arg1;

@end

