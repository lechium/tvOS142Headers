/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Notes/Notes-Structs.h>
@interface ICReachability : NSObject {

	BOOL _alwaysReturnLocalWiFiStatus;
	SCNetworkReachabilityRef _reachabilityRef;

}
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)sharedReachabilityForInternetConnection;
-(void)dealloc;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(long long)currentReachabilityStatus;
-(void)stopNotifier;
-(BOOL)startNotifier;
@end

