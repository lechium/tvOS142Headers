/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DAFolderChangeConsumer.h>

@class MFConditionLock, MFDAFolderChangeResult;

@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer> {

	MFConditionLock* _conditionLock;
	MFDAFolderChangeResult* _result;

}
-(id)init;
-(void)dealloc;
-(void)folderChange:(id)arg1 finishedWithStatus:(long long)arg2 error:(id)arg3 ;
-(id)waitForResult;
@end

