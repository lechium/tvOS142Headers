/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolDOMDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)documentUpdated;
-(void)inspectWithNodeId:(int)arg1 ;
-(void)setChildNodesWithParentId:(int)arg1 nodes:(id)arg2 ;
-(void)attributeModifiedWithNodeId:(int)arg1 name:(id)arg2 value:(id)arg3 ;
-(void)attributeRemovedWithNodeId:(int)arg1 name:(id)arg2 ;
-(void)inlineStyleInvalidatedWithNodeIds:(id)arg1 ;
-(void)characterDataModifiedWithNodeId:(int)arg1 characterData:(id)arg2 ;
-(void)childNodeCountUpdatedWithNodeId:(int)arg1 childNodeCount:(int)arg2 ;
-(void)childNodeInsertedWithParentNodeId:(int)arg1 previousNodeId:(int)arg2 node:(id)arg3 ;
-(void)childNodeRemovedWithParentNodeId:(int)arg1 nodeId:(int)arg2 ;
-(void)shadowRootPushedWithHostId:(int)arg1 root:(id)arg2 ;
-(void)shadowRootPoppedWithHostId:(int)arg1 rootId:(int)arg2 ;
-(void)customElementStateChangedWithNodeId:(int)arg1 customElementState:(long long)arg2 ;
-(void)pseudoElementAddedWithParentId:(int)arg1 pseudoElement:(id)arg2 ;
-(void)pseudoElementRemovedWithParentId:(int)arg1 pseudoElementId:(int)arg2 ;
-(void)didAddEventListenerWithNodeId:(int)arg1 ;
-(void)willRemoveEventListenerWithNodeId:(int)arg1 ;
-(void)didFireEventWithNodeId:(int)arg1 eventName:(id)arg2 timestamp:(double)arg3 data:(id*)arg4 ;
-(void)powerEfficientPlaybackStateChangedWithNodeId:(int)arg1 timestamp:(double)arg2 isPowerEfficient:(BOOL)arg3 ;
@end

