/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalDAV/CalDAVOperation.h>

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {

	BOOL _fetchPrincipalSearchProperties;

}

@property (assign,nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate; 
@property (assign,nonatomic) BOOL fetchPrincipalSearchProperties;                            //@synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties - In the implementation block
-(void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2 ;
-(BOOL)fetchPrincipalSearchProperties;
-(void)setFetchPrincipalSearchProperties:(BOOL)arg1 ;
-(void)refreshProperties;
@end

