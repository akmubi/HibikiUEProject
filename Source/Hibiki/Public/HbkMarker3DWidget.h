#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HbkMarker3DWidgetDispatherDelegate.h"
#include "HbkMarkerBaseWidget.h"
#include "HbkMarker3DWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class HIBIKI_API UHbkMarker3DWidget : public UHbkMarkerBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMarker3DWidgetDispather OnTargetInWindowEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMarker3DWidgetDispather OnTargetOutWindowEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WidgetSize;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetPos;
    
    UHbkMarker3DWidget();

    UFUNCTION(BlueprintCallable)
    void SetTargetPosition(FVector NewTargetPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetDrawPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Function_IsWindowInTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_TargetOutWindowEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_TargetInWindowEvent();
    
};

