#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "PlayerAsyncActionDelegateDelegate.h"
#include "HbkPlayerInterpMove.generated.h"

class UHbkPlayerInterpMove;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkPlayerInterpMove : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAsyncActionDelegate MoveEnded;
    
    UHbkPlayerInterpMove();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkPlayerInterpMove* PlayerInterpMove(UObject* WorldContextObject, const FTransform& Goal, float InterpTime, bool bStopSlotAnim);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveEnded();
    
};

