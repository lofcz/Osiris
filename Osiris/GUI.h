#pragma once

#include <memory>
#include <string>

struct ImFont;

class GUI {
public:
    GUI() noexcept;
    void render() noexcept;
    bool open = true;
		struct {
		ImFont* tahoma = nullptr;
		ImFont* segoeui = nullptr;
	} fonts;
private:
    static void hotkey(int&) noexcept;
    void updateColors() const noexcept;
    void renderMenuBar() noexcept;
	void drawLuaItems(int tab, int column);
    void renderAimbotWindow(bool contentOnly = false) noexcept;
    void renderRagebotWindow(bool contentOnly = false) noexcept;
    void renderAntiAimWindow(bool contentOnly = false) noexcept;
    void renderTriggerbotWindow(bool contentOnly = false) noexcept;
    void renderBacktrackWindow(bool contentOnly = false) noexcept;
    void renderGlowWindow(bool contentOnly = false) noexcept;
    void renderChamsWindow(bool contentOnly = false) noexcept;
    void renderStreamProofESPWindow(bool contentOnly = false) noexcept;
    void renderVisualsWindow(bool contentOnly = false) noexcept;
    void renderSkinChangerWindow(bool contentOnly = false) noexcept;
    void renderSoundWindow(bool contentOnly = false) noexcept;
    void renderStyleWindow(bool contentOnly = false) noexcept;
    void renderMiscWindow(bool contentOnly = false) noexcept;
    void renderConfigWindow(bool contentOnly = false) noexcept;
    void renderGuiStyle2() noexcept;

    struct {
        bool aimbot = false;
        bool ragebot = false;
        bool antiAim = false;
        bool triggerbot = false;
        bool backtrack = false;
        bool glow = false;
        bool chams = false;
        bool streamProofESP = false;
        bool visuals = false;
        bool skinChanger = false;
        bool sound = false;
        bool style = false;
        bool misc = false;
        bool config = false;
    } window;
};

inline std::unique_ptr<GUI> gui;
