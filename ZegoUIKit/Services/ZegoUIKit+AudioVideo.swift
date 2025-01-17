//
//  UIKitService+AudioVideo.swift
//  ZegoUIKit
//
//  Created by zego on 2022/7/25.
//

import Foundation
import ZegoExpressEngine

extension ZegoUIKit {
    
    public func setAudioVideoResourceMode(_ model: ZegoAudioVideoResourceMode) {
        ZegoUIKitCore.shared.setAudioVideoResourceMode(model)
    }

    public func useFrontFacingCamera(isFrontFacing: Bool) {
        ZegoUIKitCore.shared.useFrontFacingCamera(isFrontFacing: isFrontFacing)
    }
    
    public func setAudioOutputToSpeaker(enable: Bool) {
        ZegoUIKitCore.shared.enableSpeaker(enable: enable)
    }
    
    public func isMicrophoneOn(_ userID: String) -> Bool {
        return ZegoUIKitCore.shared.isMicDeviceOn(userID)
    }
    
    public func isCameraOn(_ userID: String) -> Bool {
        return ZegoUIKitCore.shared.isCameraDeviceOn(userID)
    }
    
    public func turnMicrophoneOn(_ userID: String, isOn: Bool) {
        ZegoUIKitCore.shared.turnMicDeviceOn(userID, isOn: isOn)
    }
    
    public func turnCameraOn(_ userID: String, isOn: Bool) {
        ZegoUIKitCore.shared.turnCameraDeviceOn(userID, isOn: isOn)
    }
    
    public func startPlayingAllAudioVideo() {
        self.enableAudioVideoPlaying = true
        ZegoUIKitCore.shared.startPlayingAllAudioVideo()
    }
    
    public func stopPlayingAllAudioVideo() {
        self.enableAudioVideoPlaying = false
        ZegoUIKitCore.shared.stopPlayingAllAudioVideo()
    }
    
    func setLocalVideoView(renderView: UIView, videoMode: ZegoUIKitVideoFillMode) {
        ZegoUIKitCore.shared.setLocalVideoView(renderView: renderView, videoMode: videoMode)
    }
    
    func setRemoteVideoView(userID: String, renderView: UIView, videoMode: ZegoUIKitVideoFillMode) {
        ZegoUIKitCore.shared.setRemoteVideoView(userID: userID, renderView: renderView, videoMode: videoMode)
    }
    
    func setRemoteScreenShareView(userID: String, renderView: UIView, videoMode: ZegoUIKitVideoFillMode = .aspectFit) {
        ZegoUIKitCore.shared.setRemoteScreenShareView(userID: userID, renderView: renderView, videoMode: videoMode)
    }
    
}
