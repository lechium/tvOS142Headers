/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RWIProtocolDOMDomainHandler.h>

@class NSMutableDictionary, RWIProtocolDOMNode, NSMapTable, IKJSInspectorController, NSString;

@interface IKJSInspectorDOMAgent : NSObject <RWIProtocolDOMDomainHandler> {

	NSMutableDictionary* _searches;
	RWIProtocolDOMNode* _rootNode;
	NSMapTable* _eventListenersMap;
	int _eventListenerIdSequence;
	BOOL _inspectElementModeEnabled;
	IKJSInspectorController* _controller;

}

@property (nonatomic,__weak,readonly) IKJSInspectorController * controller;                                    //@synthesize controller=_controller - In the implementation block
@property (getter=isInspectElementModeEnabled,nonatomic,readonly) BOOL inspectElementModeEnabled;              //@synthesize inspectElementModeEnabled=_inspectElementModeEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_parseAttributeString:(id)arg1 ;
+(id)_nodeIDsFromNodePaths:(id)arg1 ;
-(BOOL)hideHighlight;
-(IKJSInspectorController *)controller;
-(void)getDocumentWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)requestChildNodesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 depth:(int*)arg4 ;
-(void)setNodeValueWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 value:(id)arg4 ;
-(void)removeNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 ;
-(void)setAttributeValueWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 name:(id)arg4 value:(id)arg5 ;
-(void)setAttributesAsTextWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 text:(id)arg4 name:(id*)arg5 ;
-(void)removeAttributeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 name:(id)arg4 ;
-(void)getSupportedEventNamesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)getDataBindingsForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 ;
-(void)getAssociatedDataForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 ;
-(void)getEventListenersForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 ;
-(void)setEventListenerDisabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 eventListenerId:(int)arg3 disabled:(BOOL)arg4 ;
-(void)getAccessibilityPropertiesForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 ;
-(void)getOuterHTMLWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 ;
-(void)setOuterHTMLWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 outerHTML:(id)arg4 ;
-(void)performSearchWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 query:(id)arg3 nodeIds:(id*)arg4 caseSensitive:(BOOL*)arg5 ;
-(void)getSearchResultsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 searchId:(id)arg3 fromIndex:(int)arg4 toIndex:(int)arg5 ;
-(void)discardSearchResultsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 searchId:(id)arg3 ;
-(void)setInspectModeEnabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 enabled:(BOOL)arg3 highlightConfig:(id*)arg4 ;
-(void)highlightNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 highlightConfig:(id)arg3 nodeId:(int*)arg4 objectId:(id*)arg5 ;
-(void)highlightNodeListWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeIds:(id)arg3 highlightConfig:(id)arg4 ;
-(void)hideHighlightWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)getAttributesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 ;
-(void)moveToWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 targetNodeId:(int)arg4 insertBeforeNodeId:(int*)arg5 ;
-(BOOL)isInspectElementModeEnabled;
-(void)inspectNodeWithID:(long long)arg1 ;
-(id)initWithInspectorController:(id)arg1 ;
-(void)documentDidChange;
-(void)didAddEventListenerForNodeID:(int)arg1 ;
-(void)willRemoveEventListenerForNodeID:(int)arg1 ;
-(void)documentDidUpdate;
-(void)_fullfillNodePath:(id)arg1 ;
-(int)_eventListenerIDForListener:(id)arg1 ;
-(void)setInspectModeEnabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 enabled:(BOOL)arg3 highlightConfig:(id*)arg4 showRulers:(BOOL*)arg5 ;
-(void)getEventListenersForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 objectGroup:(id*)arg4 ;
-(void)performSearchWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 query:(id)arg3 nodeIds:(id*)arg4 ;
@end

