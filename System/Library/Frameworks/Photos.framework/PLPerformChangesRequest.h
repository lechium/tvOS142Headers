/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLPerformChangesRequest <NSObject>
@required
-(void)executeWithService:(id)arg1 reply:(/*^block*/id)arg2;
-(id)errorWithLocalizedDescription:(id)arg1;
-(void)discardUnsupportedLimitedLibraryChangeRequests;
-(void)decodeWithService:(id)arg1 clientAuthorization:(id)arg2;
-(long long)accessScopeOptionsRequiredForRequestedChanges;

@end

