#!/bin/bash

# This script requires super user permission to be executed.
# It configures passwordless sudo for power control commands *within the container*.

# If a username is passed as an argument, use it.
# Otherwise, default to the user who invoked sudo, or fall back to 'root'.
REQ_USER=${1:-${SUDO_USER:-root}}

SUDOERS_FILE_PATH=/etc/sudoers
SUDOERS_CONFIG_LINE="$REQ_USER ALL=(ALL) NOPASSWD: /sbin/poweroff, /sbin/reboot, /sbin/shutdown"

echo "============================================"
echo "Power Control Permission Setup Script (Container)"
echo "============================================"
echo "Setting up passwordless system reboot, poweroff and shutdown for user: $REQ_USER"
echo ""

# Check if the configuration line already exists in the container's sudoers file
if sudo grep -qxF "$SUDOERS_CONFIG_LINE" "$SUDOERS_FILE_PATH"; then
    echo "✓ $SUDOERS_FILE_PATH is already configured properly for user: $REQ_USER"
    echo "Nothing to be done."
else
    echo "Configuring $SUDOERS_FILE_PATH for passwordless power control..."
    
    # Use 'tee -a' as the EDITOR for visudo to safely append the new rule.
    echo "$SUDOERS_CONFIG_LINE" | sudo EDITOR='tee -a' visudo > /dev/null

    if sudo grep -qxF "$SUDOERS_CONFIG_LINE" "$SUDOERS_FILE_PATH"; then
        echo "✓ Configuration complete."
        echo "✓ User $REQ_USER can now execute poweroff, reboot, and shutdown without a password inside this container."
    else
        echo "✗ Failed to apply configuration. Please check for errors."
    fi
fi

echo ""
echo "============================================"
echo "Setup complete!"
echo "============================================"

