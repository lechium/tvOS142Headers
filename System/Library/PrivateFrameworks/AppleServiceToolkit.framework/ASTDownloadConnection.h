/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSFileHandle;


@protocol ASTDownloadConnection <ASTConnection>
@property (nonatomic,copy) id didDownloadFile; 
@property (nonatomic,readonly) NSFileHandle * destinationFileHandle; 
@required
-(id)didDownloadFile;
-(void)setDidDownloadFile:(/*^block*/id)arg1;
-(NSFileHandle *)destinationFileHandle;

@end

