#pragma once
#include "CoreMinimal.h"
#include "EHbkMusicTitleTimingType.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "OnEndMusicTitleWidgetDelegateDelegate.h"
#include "HbkShowMusicTitleTask.generated.h"

class UHbkLevelSequencePlayer;
class UHbkMusicTitleWidget;
class UHbkShowMusicTitleTask;
class UObject;

UCLASS(Blueprintable)
class UHbkShowMusicTitleTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndMusicTitleWidgetDelegate OnEndedWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkMusicTitleWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkLevelSequencePlayer* SequencePlayer;
    
public:
    UHbkShowMusicTitleTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowMusicTitleTask* ShowMusicTitleFromSequencer(UObject* WorldContextObject, EHbkMusicTitleTimingType Type, UHbkLevelSequencePlayer* LevelSequencePlayer, bool IsMovie);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowMusicTitleTask* ShowMusicTitle(UObject* WorldContextObject, EHbkMusicTitleTimingType Type);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSkipedSequencer();
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget();
    
};

