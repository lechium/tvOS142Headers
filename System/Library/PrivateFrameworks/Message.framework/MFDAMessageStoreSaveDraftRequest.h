/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccess/DADraftMessageRequest.h>
#import <libobjc.A.dylib/MFDAMailAccountRequest.h>

@class NSString;

@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest <MFDAMailAccountRequest> {

	NSString* _messageIDHeader;
	NSString* _folderID;

}

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(void)dealloc;
-(BOOL)isUserRequested;
-(unsigned long long)generationNumber;
-(id)initWithMessage:(id)arg1 mailbox:(id)arg2 ;
-(id)deferredOperation;
-(BOOL)shouldSend;
@end

