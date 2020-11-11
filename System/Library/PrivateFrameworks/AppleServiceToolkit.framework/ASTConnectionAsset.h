/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleServiceToolkit/ASTMaterializedConnection.h>
#import <libobjc.A.dylib/ASTDownloadConnection.h>

@class NSFileHandle, NSString, NSMutableURLRequest;

@interface ASTConnectionAsset : ASTMaterializedConnection <ASTDownloadConnection> {

	/*^block*/id _didDownloadFile;
	NSFileHandle* _destinationFileHandle;
	NSString* _assetName;

}

@property (nonatomic,retain) NSString * assetName;                                         //@synthesize assetName=_assetName - In the implementation block
@property (nonatomic,copy) id didDownloadFile;                                             //@synthesize didDownloadFile=_didDownloadFile - In the implementation block
@property (nonatomic,readonly) NSFileHandle * destinationFileHandle;                       //@synthesize destinationFileHandle=_destinationFileHandle - In the implementation block
@property (nonatomic,copy) id didReceiveResponse; 
@property (nonatomic,readonly) NSMutableURLRequest * request; 
@property (assign,nonatomic,__weak) id<ASTConnectionStatusDelegate> delegate; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) long long networkDisconnectedRetryCount; 
@property (assign,nonatomic) BOOL retryOnNetworkDisconnected; 
@property (nonatomic,readonly) unsigned long long rootOfTrust; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)method;
-(id)endpoint;
-(id)accept;
-(id)didDownloadFile;
-(void)setDidDownloadFile:(id)arg1 ;
-(NSFileHandle *)destinationFileHandle;
-(NSString *)assetName;
-(id)initWithAssetName:(id)arg1 destinationFileHandle:(id)arg2 ;
-(void)setAssetName:(NSString *)arg1 ;
@end

