/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CDPContext;


@protocol CDPDOctagonTrustProxy <NSObject>
@property (nonatomic,retain) CDPContext * cdpContext; 
@required
-(id)initWithContext:(id)arg1;
-(CDPContext *)cdpContext;
-(void)setCdpContext:(id)arg1;
-(id)fetchEscrowRecords:(id)arg1 forceFetch:(BOOL)arg2 error:(id*)arg3;
-(id)fetchAllEscrowRecords:(id)arg1 forceFetch:(BOOL)arg2 error:(id*)arg3;

@end

